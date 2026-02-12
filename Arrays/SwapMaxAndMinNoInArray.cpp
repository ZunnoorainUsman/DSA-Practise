#include<iostream>
using namespace std;
void swapMaxAndMinNumber(int arr[], int size)
{
	int large = 0, small = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > arr[large])
		{
			large = i;
		}
		if (arr[i] < arr[small])
		{
			small = i;
		}
	}
	int temp = arr[large];
	arr[large] = arr[small];
	arr[small] = temp;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	swapMaxAndMinNumber(arr, size);
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}