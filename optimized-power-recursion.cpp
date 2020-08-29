#include <iostream>
using namespace std;

int optimized_approach(int a, int i) {
	//base case
	if(i == 0) { return 1; }
	
	//recursive case
	int ans = optimized_approach(a, i/2);
	ans *= ans;

	if(i%2 == 1)
		return 2 * ans;
	else
		return ans;
}

int main() {
	int var, n;
	
	cout << "Enter the number first: ";
	cin >> var;
	cout << "Enter the power of that number: ";
	cin >> n;

	cout << optimized_approach(var,n);
	cout << endl;

	return 0;
}