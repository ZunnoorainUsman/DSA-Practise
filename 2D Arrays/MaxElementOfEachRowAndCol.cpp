#include<iostream>
using namespace std;
int main()
{
	int arr[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{2,4,6,8,10},{1,3,5,7,9},{2,3,4,5,6} };
	int Rmax;
	int Cmax;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (j == 0)
			{
				Rmax = arr[i][j];
				Cmax = arr[j][i];
			}
			if (arr[i][j] > Rmax)
				Rmax = arr[i][j];
			if (arr[j][i] > Cmax)
				Cmax = arr[j][i];
		}
		cout << "MAx of row " << i+1 << " : " << Rmax << endl;
		cout <<"MAX of coloum " << i+1 << " : " << Cmax << endl;
	}
	return 0;
}
