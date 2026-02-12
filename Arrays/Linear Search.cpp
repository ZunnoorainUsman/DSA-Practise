#include<iostream>
using namespace std;
void linearSearch(int arr[], int size, int target)
{
	bool found = false;
	cout << "indexes: ";
	for (int i = 0; i < size; ++i)
	{
		if (target == arr[i])
		{
			cout << i << " ";
			found = true;
		}
	}
	if (!found)
		cout << "Not found";
}
int main()
{
	int arr[] = { 1,2,3,4,55,22,100,23,14,1,2,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int target;
	cout << "Enter Target: ";
	cin >> target;
	linearSearch(arr, size, target);

	return 0;
}