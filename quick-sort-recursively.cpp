#include <iostream>
using namespace std;

int partition(int * , int , int );
void quicksort(int * , int , int );

int partition(int *a, int s, int e) {
	int i = s-1;
	int j = s;
	int pivot = a[e];

	for(; j < e; ++j) {
		if(a[j] < pivot)
			swap(a[j], a[++i]);
	}

	//now place the pivot element in appropriate place
	swap(a[i+1], a[e]);

	return i+1; 
}

void quicksort(int *a, int start, int end) {
	//base case
	if(start >= end) { return; }

	//recursive case
	int pivot = partition(a, start, end);

	//left part of pivot element
	quicksort(a, start, pivot-1);

	//right part of pivot element
	quicksort(a, pivot+1, end);
}

int main() {
	int size;
	cout << "Enter the number of elements: ";
	cin >> size;

	int arr[size];

	cout << "Enter the array elements: ";
	for(int i = 0; i < size; ++i)
		cin >> arr[i];

	quicksort(arr, 0, size-1);

	cout << "Here's the Sorted array -->  ";
	for(int i = 0; i < size; ++i)
		cout << arr[i] << " ";

	return 0;
}