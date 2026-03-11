#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("numbers.txt");
	if (!fin)
	{
		cout << "Not found";
		return 0;
	}
	int count, rollNo, Marks;
	char name[50];
	cout << "Count RollNo Name: MArks" << endl;
	while (fin>>count)
	{
		
		cout << count<<". ";
		fin >> rollNo;
		cout << rollNo;
		fin >> name;
		cout << " : " << name << " : ";
		fin >> Marks;
		cout << Marks;
		cout << endl;
	}
	fin.close();
	return 0;
}
