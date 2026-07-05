#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int Csum = 0;
	int Rsum = 0;
	for (int i = 0; i < 3; ++i)
	{
		cout << "Enter row " << i + 1 << " : " << endl;
		for (int j = 0; j < 3; ++j)
		{
			cout << "Enter value of coloum " << j + 1 << " :";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; ++i)
	{
		Csum = 0;
		Rsum = 0;
		for (int j = 0; j < 3; ++j)
		{
			Csum += arr[j][i];
			Rsum += arr[i][j];
		}
		cout << "sum of row" << i + 1 <<" : "<< Rsum << endl;
		cout << "sum of colum" << i + 1 << " : " << Csum << endl;
		cout << endl;
	}
	return 0;
}