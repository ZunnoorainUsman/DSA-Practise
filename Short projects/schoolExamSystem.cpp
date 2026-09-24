#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

void display(int marks[3][4])
{
	cout << "subject    1 2 3 4" << endl;
	for (int i = 0; i < 3; ++i) {
		cout << "Stdent " << i + 1 << " : ";
		for (int j = 0; j < 4; ++j)
		{
			cout << marks[i][j] << " ";
		}
		cout << endl;
	}
}
void input(int** arr, int s)
{
	for (int i = 0; i < s; ++i) {
		cout << "Enter for Stdent " << i + 1 << " : ";
		for (int j = 0; j < 4; ++j)
		{
			cin >> *(*(arr + i)  + j);
		}
	}
}
void analyze(int** results, int s)
{
	ofstream fout("report.txt");
	cout << "Student Id   Total  Average  Status" << endl;
	fout << "Student Id  Total  Average  Status" << endl;
	for (int i = 0; i < s; ++i) 
	{
		int total = 0;
		float average;
		bool pass = false;
		for (int j = 0; j < 4; ++j)
		{
			total += results[i][j];
		}
		average = (float)total / 4;
		if (average >= 4)
			pass = true;
		cout << "    " << i + 1 << "         " << total << "       " << average << "      ";
		if (pass)
			cout << "Pass" << endl;
		else
			cout << "Fail" << endl;
		fout << "    " << i + 1 << "         " << total << "       " << average << "      ";
		if (pass)
			fout << "Pass" << endl;
		else
			fout << "Fail" << endl;
		
	}
	fout.close();
	ifstream fin("report.txt");
	if (!fin)
		return;
	char temp[50];
	fin.getline(temp, 50);
	int ID, total;
	float a;
	char status[8];
	cout << "Fail studenst: " << endl;
	while (fin >> ID)
	{
		fin >> total;
		fin >> a;
		fin >> status;
		if (strcmp(status, "Fail") == 0)
			cout << ID << "  " << total << "  " << a << "  " << status << endl;
	}
	fin.close();
}
void freeAll(int**arr, int s)
{
	for (int i = 0; i < s; ++i)
		delete[]arr[i];
	delete[]arr;
}
int main()
{
	int marks[3][4] = { {4,5,6,6}, {6,7,7,6} ,{ 9,8,8,9 } };
	display(marks);
	int s;
	cin >> s;
	int** results = new int* [s];
	for (int i = 0; i < s; ++i)
		results[i] = new int[4];
	input(results, s);
	analyze(results, s);
	freeAll(results, s);
	results = nullptr;
	return 0;
}