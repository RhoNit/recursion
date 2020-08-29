#include <iostream>
using namespace std;

int allOccur(int inp[], int n, int i, int k, int out[], int j) {
	//base case
	if(i == n) { return j; }

	//recursive case
	if(inp[i] == k) {
		out[j] = i;

		//j should be incremented to store the upcoming index of occurrence of the KEY element into the 'out' array
		return allOccur(inp, n, i+1, k, out, j+1);
	}

	//j doesn't have to accomodate, as current element is not our KEY element. Hence, it remains unchanged
	return allOccur(inp, n, i+1, k, out, j);
}


int main() {
	int size, key;

	cout << "Enter the total number of elements:";
	cin >> size;
	
	int arrIn[size], arrOut[size];

	cout << "Enter the elements of input array:";
	for(int i = 0; i < size; ++i)
		cin >> arrIn[i];

	cout << "Enter the element you wanna target:";
	cin >> key;

	int count = allOccur(arrIn, size, 0, key, arrOut, 0);
	cout << "Total count of all occurrences is : " << count << endl;

	cout << "Indices of all occurrences are --> ";
	if(count == 0) { cout << "Element is not present in the array :)"; }

	for(int k = 0; k < count; ++k)
		cout << arrOut[k] << " ";


	return 0;
}