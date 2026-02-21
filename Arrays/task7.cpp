#include<iostream>
using namespace std;
int main()
{
	int arr[4] = { 1,2,3,4 };
	int arr2[4] = { 3,4,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Common elements: ";
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (arr[i] == arr2[j])
			{
				cout << arr[i] << " ";
			}
		}
	}


	return 0;
}