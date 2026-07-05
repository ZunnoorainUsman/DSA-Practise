#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Size: ";
	cin >> n;
	if (n < 1)
		return 1;

	int* arr = new int[n];
	cout << "original: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int sum;
	cout << "Eter target sum: ";
	cin >> sum;
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			for (int k = j+1; k < n; ++k)
			{
				if (arr[i] + arr[j] + arr[k] == sum)
					count++;
			}
		}
	}
	cout << "Number of triplets with sum " << sum << ": " << count;
	delete[]arr;
	arr = nullptr;
	return 0;
}