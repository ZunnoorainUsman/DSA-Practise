#include<iostream>
using namespace std;
int main()
{
	char s1[200];
	char s2[200];
	int size = 0;
	cout << "Enter 1st: ";
	cin.getline(s1, 200);
	while (s1[size] != 0)
	{
		size++;
	}
	cout << "Enter 2nd: ";
	cin.getline(s2, 200);
	bool same = true;
	
	for (int i = 0; i<size; ++i)
	{
		if (s1[i] != s2[i])
		{
			same = false;
			break;
		}
	}
	if (!same)
	{
		cout << "Not Matched ";

	}
	else {
		cout << "MAtched";
	}


	return 0;
}
