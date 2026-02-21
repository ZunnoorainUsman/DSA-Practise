#include<iostream>
using namespace std;
int main()
{
	char ch1[100];
	cout << "Enter the 1st array: ";
	cin.getline(ch1, 100);
	
	for (int i = 0; ch1[i] != '\0'; ++i)
	{
		int count = 0;
		for (int j = 0; ch1[j] != '\0'; ++j)
		{
			if (ch1[i] == ch1[j])
			{
				count++;
			}
		}
		bool already = false;
		for (int k = 0; k < i; ++k)
		{
			if (ch1[i] == ch1[k])
			{
				already = true;
			}
		}
		if (!already)
		{
			cout << ch1[i] << " appears " << count << " times" << endl;
		}
	}

	return 0;
}
