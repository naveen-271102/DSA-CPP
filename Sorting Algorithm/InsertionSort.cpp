#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, x, j;
	for (i = 1; i < n; i++)
	{
		x = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > x)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = x;
	}
}

int main()
{
    int arr[] = { 11, 13, 7, 12, 16, 9, 24, 5, 10, 3 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, N);
    int i;
    for (i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
 
    return 0;
}
