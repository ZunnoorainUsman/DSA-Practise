#include<iostream>
using namespace std;
int main()
{
	int arr[8];
	
	for (int i = 0; i < 8; ++i)
	{
		cout << "enter the exam "<< i+1 <<" score: " ;
		cin >> arr[i];
	}
	
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 7 - i ; ++j)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
		cout << "After pass " << i + 1 << " : ";
		for (int i = 0; i < 8; ++i)
		{
			cout << arr[i] << " ";

		}
		cout << endl;
	}
	
	return 0;
}
