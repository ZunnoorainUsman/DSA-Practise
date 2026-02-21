#include<iostream>
using namespace std;
int main()
{
	char source[200];
	char destination[200];
	cout << "Enter in source array: ";
	cin.getline(source, 200);
	cout << "Copied destination array is: ";
	for (int i = 0; source[i] != '\0'; ++i)
	{
		destination[i] = source[i];
		cout << destination[i] ;
	}
	


	return 0;
}