#include<iostream>
using namespace std;
void uniqueElement(int arr[], int size)
{
	bool exist = false;
	for (int i = 0; i < size; ++i)
	{
		int count = 0;
		for (int j = 0; j < size; ++j)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			cout << arr[i] << " ";
			exist = true;
		}
	}
	if (!exist)
	{
		cout << "No unique Elements.";
	}
}
int main()
{
	int arr[] = { 4,23,4,3,3,23,5,1,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	
	uniqueElement(arr, size);

	return 0;
}