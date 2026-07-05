#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char arr[5][5] = {
	{'B','C','D','C','S'},
	{'R','H','A','Y','T'},
	{'E','A','I','C','S'},
	{'E','I','L','L','Y'},
	{'D','R','Y','E','R'},
	};
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	char word[6];
	cout << "enter word: ";
	cin >> word;
	int n = strlen(word);
	bool found = false;
	for (int i = 0; i < 5; ++i)
	{
		int size = 0;
		for (int j = 0; j < 5; ++j)
		{
			if (word[j] == arr[i][j])
				size++;
		}
		if (size == n)
		{
			found = true;
			cout << "Word found in row" << i + 1 << endl;
			break;
		}
		size = 0;
		for (int j = 0; j < 5; ++j)
		{
			if (word[j] == arr[j][i])
				size++;
		}
		if (size == n)
		{
			found = true;
			cout << "Word found in COLUMN" << i + 1 << endl;
			break;
		}
	}
	if (!found)
		cout << "not found";
	return 0;
}