#include <iostream>
using namespace std;

int bubble_sort(int *a, int j, int n) {
	//base case
	if(n == 1) { return 0; }
	//corner case
	if(j == n-1) { 
		j = 0;
		n -= 1;
	}

	//recursive case
	if(a[j] > a[j+1]) {
		swap(a[j], a[j+1]);
		return bubble_sort(a, j+1, n);
	}
	return bubble_sort(a, j+1, n);
}

int main() {
	int size;

	cout << "Enter the size of the array: ";
	cin >> size;

	int arr[size];

	cout << "Enter the array elements: ";
	for(int i = 0; i < size; ++i)
		cin >> arr[i];

	bubble_sort(arr, 0, size);
	cout << "Here's the Sorted array -->  ";
	for(int i = 0; i < size; ++i)
		cout << arr[i] << " ";

	return 0;
}