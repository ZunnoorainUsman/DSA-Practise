#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 12,25,33,47,50,61,75,88,99 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int target;
	cout << "Enter the target: ";
	cin >> target;
	int low = 0, high = size - 1, mid;
	int comparison=0;
	int foundIndex = -1;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		comparison++;
		if (arr[mid] == target)
		{
			foundIndex = mid;
			break;
		}
		if (arr[mid] < target)
		{
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (foundIndex != -1)
	{
		cout << "Found at index: " << foundIndex << endl;
	}
	else {
		cout << "Not found" << endl;
	}
	cout << "Comparisons are: " << comparison << endl;

	return 0;
}
