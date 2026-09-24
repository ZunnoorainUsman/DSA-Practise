#include<iostream>
using namespace std;


void input(int** arr, int n, int col)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter row: " << i + 1 << endl;
		for (int j = 0; j < col; ++j)
			cin >> arr[i][j];
	}
}
void freeAll(int**& arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[]arr[i];
	}
	delete[]arr;
	arr = nullptr;
}
int maxAtendnce(int** arr, int row, int col, int& absent)
{
	int index = 0;
	int max = 0;
	for (int i = 0; i < row; ++i)
	{
		int count = 0;
		for (int j = 0; j < col; ++j)
		{
			if (arr[i][j] == 1)
				count++;
		}
		if (count > max)
		{
			max = count;
			index = i;
		}
		if (count == 0)
		{
			absent = i;
		}
	}
	return index;
}
void display(int** arr,char name[][20], int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		cout << name[i] << " : ";
		for (int j = 0; j < col; ++j)
		{
		cout<<arr[i][j]<<" ";
		}
		cout << endl;
	}
}
int main()
{
	const int size = 5;
	char names[size][20] = { "ali","haider","Hammad","zulfiqar","Usman" };
	int** attendance = new int* [size];
	for (int i = 0; i < size; ++i)
		attendance[i] = new int[7];
	input(attendance, size, 7);
	cout << "Attendence sheet: " << endl;
	display(attendance,names, size, 7);
	int absent = 0;
	int max = maxAtendnce(attendance, size, 7,absent);
	cout << "Max attendence: " << names[max] << endl;
	cout << "employe absent all week : " << names[absent];

	return 0;
}