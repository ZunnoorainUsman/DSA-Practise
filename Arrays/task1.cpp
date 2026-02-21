#include<iostream>
using namespace std;
int main()
{
	char arr[100];
	cout << "Enter the sentence with spaces: ";
	cin.getline(arr, 100);
	cout << "after removing spaces: " << endl;
	for (int i = 0; arr[i] != '\0'; ++i)
	{
		if (arr[i] != ' ')
		{
			cout << arr[i];
		}
	}

	return 0;
}