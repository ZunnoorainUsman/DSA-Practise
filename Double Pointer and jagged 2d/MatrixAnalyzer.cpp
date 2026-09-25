#include <iostream>
using namespace std;

int** createArr(int rows,int col) {
	int** arr = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[col];
	}
	return arr;

}
void inputArr(int ** arr ,int rows, int col)
{
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << "Enter for row " << i + 1 << " and col " << j + 1 << ": ";
			cin >> arr[i][j];
		}
	}
}
void outputArr(int** arr, int rows, int col)
{
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void sumRow(int** arr, int rows, int col) {
	for (int i = 0; i < rows; ++i) {
		int sum = 0;
		for (int j = 0; j < col; ++j) {
			sum += arr[i][j];
		}
		cout << "Sum of row " << i + 1 << ": " << sum << endl;
	}
}
void sumCol(int** arr, int rows, int col) {
	for (int j = 0; j < col; ++j) {
		int sum = 0;
		for (int i = 0; i < rows; ++i) {
			sum += arr[i][j];
		}
		cout << "Sum of column " << j + 1 << ": " << sum << endl;
	}
}
void findLargest(int** arr, int rows, int col) {
	int largest = arr[0][0];
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < col; ++j) {
			if (arr[i][j] > largest) {
				largest = arr[i][j];
			}
		}
	}
	cout << "Largest element: " << largest << endl;
}
void primaryAndSecondaryDiognalSums(int** arr, int r, int c) {
	int Psum = 0;
	for (int i = 0; i < r; ++i) {
		Psum += arr[i][i];
	}
	cout << "Primary Sum is: " << Psum << endl;
	int Ssum = 0;
	for (int i = 0; i < r; ++i) {
		Ssum += arr[i][c - i - 1];
	}
	cout << "Secondary Sum is: " << Ssum << endl;

}
bool symmetricArr(int** arr, int r, int c) {
	if (r != c) {
		return false;
	}
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (arr[i][j] != arr[j][i]) {
				return false;
			}
		}
	}
	return true;
}
int main() {
	int rows, col;
	cin >> rows >> col;
	int** arr = createArr(rows, col);
	inputArr(arr, rows, col);
	outputArr(arr, rows, col);
	sumRow(arr, rows, col);
	sumCol(arr, rows, col);
	findLargest(arr, rows, col);
	primaryAndSecondaryDiognalSums(arr, rows, col);
	if (symmetricArr(arr, rows, col)) {
		cout << "its summetric" << endl;
	}
	else {
		cout << "Not symmetric";
	}

	return 0;
}