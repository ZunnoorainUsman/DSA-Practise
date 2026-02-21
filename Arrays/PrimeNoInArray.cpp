#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 11,15,7,18,23 };
	cout << "Prime numbers: ";
	for (int i = 0; i < 5; ++i)
	{
		int num = arr[i];
		int count = 0;
		for (int j = 1; j <= num; ++j)
		{
			if (num % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			cout << num << " ";
		}
	}
	return 0;
}
