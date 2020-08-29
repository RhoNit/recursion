#include <iostream>
using namespace std;

int power_recursion(int a, int i) {
	//base condition
	if(i == 0) { return 1; }

	//recursive conditon
	int ret = power_recursion(a, i-1);
	ret *= a;

	return ret;
}

int main() {
	int var, n;
	
	cout << "Enter the number first: ";
	cin >> var;
	cout << "Enter the power of that number: ";
	cin >> n;

	cout << power_recursion(var,n);
	cout << endl;
	return 0;
}