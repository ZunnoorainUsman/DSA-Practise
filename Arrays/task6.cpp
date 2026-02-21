#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 4,5,3,4,2,5,5,7,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int count ;
	cout << "Dublicate elements: ";
	for (int i = 0; i < size; ++i)
	{
		count = 0;
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		bool already = false;
		for (int k = 0; k < i;++k)
		{
			if (arr[i] == arr[k])
			{
				already = true;
			}
		}
		if (!already&&count>1)
		{
			cout << arr[i] << " ";
		}
	}
	

	return 0;
}