#include<iostream>
using namespace std;
int main()
{
	char ch1[100];
	cout << "Enter the 1st array: ";
	cin.getline(ch1, 100);
	char capital[100];
	char small[100];
	char digit[100];
	char special[100];
	int c = 0, s = 0, d = 0, sp = 0;
	for (int i = 0; ch1[i] != '\0'; ++i)
	{
		
			if (ch1[i] >= 'A' && ch1[i] <= 'Z')
			{
				capital[c] = ch1[i];
				c++;
			}
			else if (ch1[i] >= 'a' && ch1[i] <= 'z')
			{
				small[s ] = ch1[i];
				s++;
			}
			else if (ch1[i] >= '0' && ch1[i] <= '9')
			{
				digit[d ] = ch1[i];
				d++;
			}
			else 
			{
				special[sp ] = ch1[i];
				sp++;
			}
	}
	capital[c] = '\0';
	small[s] = '\0';
	digit[d] = '\0';
	special[sp] = '\0';
	cout << capital <<endl;
	cout << small << endl;
	cout << digit << endl;
	cout << special << endl;
	return 0;
}
