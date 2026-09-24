#include<iostream>
using namespace std;

void initializeAllE(char** arr, int row, int col);
void freeAll(char**& arr, int n);
void bookSeat(char** seats, int row, int col, int& booked);
void cancelSeat(char** seats, int row, int col, int& book);
void DisplaySeat(char** seats, int row, int col);

int main()
{
	int rows, col;
	cin >> rows >> col;
	char** seats = new char* [rows];
	for (int i = 0; i < rows; ++i)
		seats[i] = new char[col];
	initializeAllE(seats, rows, col);

	int booked = 0;
	int choice;

	do {
		cout << "=============================================" << endl;
		cout << "Total booked are : " << booked << endl;
		cout << "=============================================" << endl;
		cout << "1.Book a seat" << endl;
		cout << "2.Cancel a seat" << endl;
		cout << "3.Display  seat chart" << endl;
		cout << "0.Cancel" << endl;
		cout << "=============================================" << endl;
		cout << "Enter a choice: " << endl;
		cin >> choice;
		if (choice == 1)
		{
			bookSeat(seats, rows, col,booked);
			cout << endl;
		}
		else if (choice == 2)
		{
			cancelSeat(seats, rows, col, booked);
			cout << endl;
		}
		else if (choice == 3)
		{
			DisplaySeat(seats, rows, col);
			cout << endl;
		}
	} while (choice != 0);

	freeAll(seats, rows);

	return 0;
}

void initializeAllE(char** arr, int row, int col)
{
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			arr[i][j] = 'E';
}

void freeAll(char**& arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[]arr[i];
	}
	delete[]arr;
	arr = nullptr;
}
void bookSeat(char** seats, int row, int col, int& booked)
{
	char book = 'B';
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
		{
			if (seats[i][j] != 'B') {
				seats[i][j] = book;
				booked++;
				cout << "seat booked at row " << i + 1 << " col " << j + 1 << " ." << endl;
				return;
			}
		}
}
void cancelSeat(char** seats, int row, int col, int& book)
{
	int r, c;
	cout << "Enter which row: ";
	cin >> r;
	cout << "Enter which col: ";
	cin >> c;
	bool found = false;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
		{
			if (r - 1 == i && c - 1 == j) {
				seats[i][j] = 'E';
				cout << "Seat is canceld succesfully" << endl;
				found = true;
				book--;
				return;
			}
		}

	if (!found)
		cout << "Seat is already empty" << endl;
}
void DisplaySeat(char** seats, int row, int col)
{
	for (int i = 0; i < row; ++i) {
		cout << i + 1 << " ";
		for (int j = 0; j < col; ++j)
			cout << seats[i][j] << "      ";
		cout << endl;
		cout << endl;
	}
}