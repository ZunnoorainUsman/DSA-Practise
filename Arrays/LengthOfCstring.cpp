#include<iostream>
using namespace std;
int main()
{
	char arr[200];
	int length = 0;
	cout << "Enter: ";
	cin.getline(arr, 200);
	while (arr[length] != '\0')
	{
		length++;
	}
	cout << "Lenth is: " << length;


	return 0;
}
