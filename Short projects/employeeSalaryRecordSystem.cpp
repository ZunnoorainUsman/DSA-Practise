#include<iostream>
#include<fstream>
using namespace std;

void input(int** arr, int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		cout << "Enter for employe " << i + 1 << " : ";
		for (int j = 0; j < col; ++j)
		{
			cin >> arr[i][j];
		}
		cout << endl;
	}
}
void Display(int** arr, int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		cout << "Employe " << i + 1 << " : ";
		for (int j = 0; j < col; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void highestLowestAverageTotalSalary(int** arr, int row, int col)
{
	int sum = 0;
	int sumR = 0;
	int indexR = 0;
	for (int i = 0; i < col; ++i)
		sumR += arr[0][i];

	for (int i = 0; i < row; ++i)
	{
		int current = 0;
		for (int j = 0; j < col; ++j)
		{
			current += arr[i][j];
			sum += arr[i][j];
		}
		if (current > sumR) {
			sumR = current;
			indexR = i;
		}
	}
	cout << "Total: " << sum << endl;
	cout << "Employe with highest salary is employe no " << indexR + 1 << " with " << sumR << " Salary." << endl;

	for (int i = 0; i < col; ++i)
	{
		int current = 0;
		for (int j = 0; j < row; ++j)
		{
			current += arr[j][i];
		}
		cout << "Average salary of " << i + 1 << " month is " << (float)current / row << endl;
		
	}

}
int main()
{
	int rows;
	cin >> rows;
	int month = 12;
	int** salary = new int* [rows];
	for (int j = 0; j < rows; ++j)
	{
		salary[j] = new int[month];
	}
	input(salary, rows, month);
	ofstream fout("salary.txt");
	for (int i = 0; i < rows ;++i)
	{
		for (int j = 0; j < month; ++j)
		{
			fout << salary[i][j] << " ";
		}
		fout << endl;
	}
	fout.close();
	Display(salary, rows, month);
	highestLowestAverageTotalSalary(salary, rows, month);
	for (int i = 0; i < rows; ++i)
		delete[]salary[i];

	delete[]salary;
	salary = nullptr;
	return 0;
}