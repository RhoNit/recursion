#include <iostream>

int firstOcc(int *a, int n, int target) {
	//base condition
	if(n == 0) { return -1; }

	//recursion or current case
	if(a[0] == target) { return 0; }

	int res = firstOcc(a+1, n-1, target);

	if(res >= 0)
		return res+1;
	else
		return -1;
}

int main() {
	int size, key;

	std::cout << "Enter the size of the array: " << std::endl;
	std::cin >> size;

	int arr[size];

	std::cout << "Enter the elements of array: " << std::endl;
	for(int i = 0; i < size; ++i)
		std::cin >> arr[i];

	std::cout << "Enter the target element: ";
	std::cin >> key;

	int ret = firstOcc(arr, size, key);
	std::cout << ret;

	return 0;
}