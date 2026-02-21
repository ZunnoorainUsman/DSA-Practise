#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 4,3,4,5,3};
	for (int i = 0; i < 5; ++i)
	{
		int count = 0;
		for (int j = 0; j < 5; ++j)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}

		}
		bool exist = false;
		for (int k = 0; k < i; ++k)
		{
			if (arr[i] == arr[k])
			{
				exist = true;
			}
		}
		if (!exist) {
			cout << arr[i] << " appears " << count << " times, ";
		}
	}
	return 0;
}