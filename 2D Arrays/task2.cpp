#include<iostream>
using namespace std;
int main()
{
	int arr[4][4];
	int sum = 0;
	for (int i = 0; i < 4; ++i)
	{
		cout << "Enter row " << i + 1 << " : " << endl;
		for (int j = 0; j < 4; ++j)
		{
			cout << "Enter value of coloum " << j + 1 << " :";
			cin >> arr[i][j];
			sum += arr[i][j];
		}
	}
	cout << endl << "sum is: " << sum << endl;
	return 0;
}