#include <iostream>
using namespace std;

int shellSort(int arr[], int n)
{
	for (int gap = n/2; gap > 0; gap /= 2)
	{

		for (int i = gap; i < n; i += 1)
		{

			int temp = arr[i];

			int j;			
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];

			arr[j] = temp;
		}
	}
	return 0;
}

void printArray(int arr[], int n)
{
	
}

int main()
{
	int arr[] = {10, 12, 3, 1, 23}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	shellSort(arr, n);

	cout << "\nArray after Shell Sort: \n";
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}
