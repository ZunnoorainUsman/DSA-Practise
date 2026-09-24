#include<iostream>
using namespace std;

void inputMarks(int** mark, int row, int col)
{
	for (int i = 0; i < row; ++i) {
		cout << "Enter marks for student " << i + 1 << " : " << endl;
		for (int j = 0; j < col; ++j)
		{
			cout << "Enter for subject " << j + 1 << " : ";
			cin >> *(*(mark + i) + j);
		}
	}
}
void DisplayMarks(int** mark, int row, int col)
{
	for (int i = 0; i < row; ++i) {
		cout << "Student " << i + 1 << " : ";
		for (int j = 0; j < col; ++j)
		{
			cout << *(*(mark + i) + j) << "  ";
		}
		cout << endl;
	}
}
void totalAndAverageMarks(int** mark, int row, int col)
{

	for (int i = 0; i < row; ++i) 
	{
		int sum = 0;
		for (int j = 0; j < col; ++j)
		{
			sum += mark[i][j];
		}
		cout << "Marks of student " << i + 1 << " : " << sum << endl;
	}
	for (int i = 0; i < col; ++i)
	{
		int sumC = 0;
		float average = 0;
		for (int j = 0; j < row; ++j)
		{
			sumC += mark[j][i];
		}
		average = (float)sumC / row;
		cout << "Average marks of subject " << i + 1 << " : " << average << endl;
	}
}
int main()
{
	int students, subjects;
	cin >> students >> subjects;
	int** marks = new int* [students];
	for (int i = 0; i < students; ++i)
		marks[i] = new int[subjects];

	inputMarks(marks, students, subjects);
	DisplayMarks(marks, students, subjects);
	totalAndAverageMarks(marks, students, subjects);
	return 0;
}