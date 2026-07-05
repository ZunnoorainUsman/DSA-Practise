#include<iostream>
using namespace std;
int* findAndDouble(int* start, int* end, int targetValue)
{
	while (start <= end)
	{
		if (*start == targetValue)
		{
			(*start) *= 2;
			return start;
		}
		start++;
	}
	return nullptr;
}
int main()
{
	int arr[8] = { 12,324,23,13,543,1,323,1 };
	int target;
	cout << "Enter the Target value: ";
	cin >> target;
	int* address = findAndDouble(arr, &arr[7], target);
	cout << "the returned address is: " << address << endl;
	cout << "\n-------Updated Values------- " << endl;
	for (int i = 0; i < 8; ++i)
	{
		cout << *(arr + i) << " ";
	}
	return 0;
}