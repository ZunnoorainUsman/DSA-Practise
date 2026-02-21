#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 4,5,4,6,4,7 };
	int target, search = 0;
	cout << "Target: ";
	cin >> target;
	
	for (int i = 0; i < 6; ++i)
	{
		if (arr[i] == target)
		{
			search++;
		}
	}
	cout << "count of " << target << " : " << search;
	return 0;
}