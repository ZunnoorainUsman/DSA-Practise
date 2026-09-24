#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	fstream fapp("file.txt",ios::app);
	fapp << 0 << " " << "Fizah" << " " << 8 << endl;
	ifstream fin("file.txt");
	int id[10], mark[10];
	char name[10][50];
	int i = 0;
	while (fin >> id[i]) {
		fin >> name[i];
		fin >> mark[i];
		i++;
	}
	fin.close();
	for (int j = 0; j < i; ++j)
	{
		cout << id[j] << " " << name[j] << " " <<mark[j] << endl;
	}
	int highest = mark[0];
	int index = 0;
	for (int j = 1; j < i; ++j)
	{
		if (mark[j] > highest)
		{
			highest = mark[j];
			index = j;
		}
	}
	cout << "Hughest marks studenst: " << endl;
	cout << id[index] << "   " << name[index] << "  " << mark[index] << endl;
	for (int j = 0; j < i; ++j)
	{
		int c = 0;
		for (int k = 0; k < i; ++k)
		{
			if (strcmp(name[j], name[k]) == 0)
				c++;
		}
		cout << name[j] << " apper " << c << "tumes" << endl;
	}
	cout << name[0] << endl;
	strcat_s(name[0], " Awaan");
	cout << name[0] << endl;
	cout << name[1] << endl;
	strcpy_s(name[1], name[0]);
	cout << name[1] << endl;
	_strrev(name[1]);
	cout << name[1] << endl;
	return 0;
}