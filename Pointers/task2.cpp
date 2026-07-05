#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 1,7,3,2,1,0,9,1,11,2 };
	int windowSize;
	cout << "Enter the window size: ";
	cin >> windowSize;

	int* left = arr;
	int* right = &arr[windowSize - 1];
	int* end = &arr[10];

	int* walker = left;
	int large[10] = {};
	int i = 0;
	while (right <= end)
	{
		walker = left;
		int sum = 0;
		while (walker <= right)
		{
			sum += *walker;
			walker++;
		}
		large[i] = sum;
		right++;
		left++;
		i++;
	}
	int largest = large[0];
	for (int i = 0; i < 8; ++i)
	{
		cout << "Sum " << i + 1 << ": " << large[i] << endl;
		if (large[i] > largest)
			largest = large[i];
	}
	cout << "LArgest is: " << largest;
	return 0;
}
