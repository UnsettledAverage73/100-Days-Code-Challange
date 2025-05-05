#include<stdio.h>

int binarySearch(int arr[], int n, int key) {

	int low = 0, high = n - 1;

	while(low <= high) {

		int mid = (low + high) / 2;

		if (arr[mid] == key)

			return mid; //Element found
				    
		else if (arr[mid] < key) 

			low = mid + 1;

		else 
			high = mid - 1;
	}

	return -1;

}

void main() {

	int arr[] = { 10,20,30,40,50,60,70 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int key = 40;

	int result = binarySearch(arr,n,key);

	if (result != -1)
		printf("Element %d found at index %d\n", key, result);

	else	
		printf("Element %d not found in array\n", key);

}
