#include <iostream>

int linearSearch(int a[], int n, int i, int k) {
	//base case
	if(i == n)
		return -1;

	//recursive case
	if(a[i] == k)
		return i;

	return linearSearch(a, n, i+1, k);
}

int main() {
	int size, key, index = 0;

	std::cout << "Enter the size of the array: " << std::endl;
	std::cin >> size;

	int arr[size];

	std::cout << "Enter the elements of array: " << std::endl;
	for(int i = 0; i < size; ++i)
		std::cin >> arr[i];

	std::cout << "Enter the target element: ";
	std::cin >> key;

	std::cout << linearSearch(arr, size, index, key);

	return 0;
}