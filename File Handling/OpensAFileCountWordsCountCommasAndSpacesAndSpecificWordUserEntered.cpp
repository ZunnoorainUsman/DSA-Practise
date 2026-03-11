#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int wordCount = 0;
	int commaCount = 0;
	int specificCount = 0;
	char target[20];
	cout << "Type the word: ";
	cin >> target;
	char word[20];
	fstream fin("count.txt");
	if (!fin)
	{
		cout << "Not found.";
		return 0;
	}
	while (fin >> word)
	{
		wordCount++;
		bool found = true;
		for (int j = 0; word[j]!='\0'; ++j)
		{
			if (word[j] == ',')
				commaCount++;
			if (word[j] >= 'A' && word[j] <= 'Z')
				word[j] = word[j] + 32;
			if (word[j] != target[j])
				found = false;
		}
		if (found)
			specificCount++;
	}
	fin.close();
	int spaceCount = wordCount - 1;
	cout << "no of words: " << wordCount << endl;
	cout << "no of commas: " << commaCount << endl;
	cout << "no of spaces: " <<spaceCount << endl;
	cout << "no of specific words: " << specificCount << endl;
	return 0;
}
