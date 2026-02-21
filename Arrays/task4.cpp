#include<iostream>
using namespace std;
int main()
{
	char arr[200];
	int capitalCount = 0;
	int smallCount = 0;
	int numCount = 0;
	cout << "Enter: ";
	cin.getline(arr, 200);
	for (int i = 0; arr[i] != '\0'; ++i)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			capitalCount++;
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			smallCount++;
		}
		else if (arr[i] >='0' || arr[i] <= '9')
		{
			numCount++;
		}
	}
	cout << endl;
	cout << "Capital Letter: " << capitalCount << endl;
	cout << "Small letters: " << smallCount << endl;
	cout << "Number: " << numCount;
	


	return 0;
}