#include <iostream>

int lastOcc(int *a, int n, int target) {
	//base condition
	if(n == 0) { return -1; }

	//recursion or current case
	int i = lastOcc(a+1, n-1, target);
	
	if(i == -1) { 
		if(a[0] == target)
			return 0;
		else
			return -1;
	}
	return i + 1;
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

	int ret = lastOcc(arr, size, key);
	std::cout << ret;

	return 0;
}