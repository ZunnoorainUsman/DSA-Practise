#include<iostream>
using namespace std;
int main()
{
	int arr[4][4];
	for (int i = 0; i < 4; ++i)
	{
		cout << "Enter row " << i + 1 << " : " << endl;
		for (int j = 0; j < 4; ++j)
		{
			cout << "Enter value of coloum " << j + 1 << " :";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int target;
	cout << "ENter target value: ";
	cin >> target;
	bool found = false;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (arr[i][j] == target)
			{
				found = true;
				cout << "found at row " << i + 1 << " and colume " << j + 1 << endl;
				break;
			}
		}
		if (found)
			break;
		cout << endl;
	}
	if (!found)
		cout << "Not found";
	return 0;
}
