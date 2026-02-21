#include<iostream>
using namespace std;
int main()
{
	char ch1[100];
	cout << "Enter the 1st array: ";
	cin.getline(ch1, 100);
	char ch2[100];
	cout << "Enter the 2nd array: ";
	cin.getline(ch2, 100);
	char ch3[200];
	int i = 0, j = 0;
	while (ch1[i] != '\0')
	{
		ch3[i] = ch1[i];
		i++;
	}
	while (ch2[j] != '\0')
	{
		ch3[i] = ch2[j];
		i++;
		j++;
	}
	ch3[i] = '\0';
	int length = i;
	cout << "Merged but unsorted: " << ch3 << endl;
	
	for (int l = 0; l<length; ++l)
	{
		for (int m = 0;m<length-l-1; ++m)
		{
			if (ch3[m] > ch3[m + 1])
			{
				swap(ch3[m], ch3[m + 1]);
			}
		}
	}
	cout << "after sorting: ";
	for (int l = 0; ch3[l] != '\0'; ++l)
	{
		cout << ch3[l] << " ";
	}
	
	return 0;
}
