// Copyright 2021 NNTU-CS
#include <iostream>
using namespace std;

int cbinsearch(int *arr, int size, int value) {
  int left = *arr;
	int right = size;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (value < arr[mid])
			right = mid - 1;
		else
			if (value > arr[mid])
				left = mid + 1;
			else
				if (value == arr[mid])
					return value;
				else if (left > right)
					continue;
	}
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5 };
	int count = cbinsearch(arr, 15, -1); //count = 3
	cout << count << endl;
  return 0; 
}
