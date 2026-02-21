#include<iostream>
using namespace std;
int main()
{
	char ch1[100];
	cout << "Enter the 1st array: ";
	cin.getline(ch1, 100);
	char find;
	cout << "Which character u wanna find: ";
	cin >> find;
	char replace;
	cout << "WHich letter u wanna replace it with: ";
	cin >> replace;
	bool isFound = false;
	for (int i = 0; ch1[i] != '\0';++i)
	{
		if (find == ch1[i])
		{
			ch1[i] = replace;
			isFound = true;
		}
	}
	if (isFound)
		cout << " After replacing: " << ch1;
	else
		cout << "char Not found ";

	return 0;
}