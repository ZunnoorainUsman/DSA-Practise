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
	/*cout << "Enter 2nd: ";
	cin.getline(s2, 200);*/
	

	for (int i = 0; i < size; ++i)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] = s1[i] + 32;
		}
		else if(s1[i]>='a'&&s1[i]<='z') {
			s1[i] = s1[i] - 32;
		}
	}
	
	cout << "Converted string : " << s1;
	return 0;
}