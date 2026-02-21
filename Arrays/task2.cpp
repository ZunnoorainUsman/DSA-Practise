#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 5,2,9,1,6,8 };
	int size = sizeof(arr) / sizeof(arr[0]),temp;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
	for (int j = 0; j < size ; ++j)
	{
		cout << arr[j] << " ";
	}


	return 0;
}