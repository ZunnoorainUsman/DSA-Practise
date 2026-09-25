#include <iostream>
using namespace std;

void displayJaggedArray(int** arr, int rows, int count[]) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < count[i]; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void findLargestInRows(int** arr, int rows, int count[]) {
	for (int i = 0; i < rows; ++i) {
		int largest = arr[i][0];
		for (int j = 1; j < count[i]; ++j) {
			if (arr[i][j] > largest) {
				largest = arr[i][j];
			}
		}
		cout << "Largest in row " << i + 1 << ": " << largest << endl;
	}
}
void findRowWithMaxSum(int** arr, int rows, int count[]) {
	int maxSum = 0;
	int rowIndex = -1;
	for (int i = 0; i < rows; ++i) {
		int sum = 0;
		for (int j = 0; j < count[i]; ++j) {
			sum += arr[i][j];
		}
		if (sum > maxSum) {
			maxSum = sum;
			rowIndex = i;
		}
	}
	cout << "Row with maximum sum is: " << rowIndex + 1 << " with sum: " << maxSum << endl;
}
void countTotalElements(int** arr, int rows, int count[]) {
	int total = 0;
	for (int i = 0; i < rows; ++i) {
		total += count[i];
	}
	cout << "Total number of elements: " << total << endl;
}
void deleteJaggedArray(int** arr, int rows) {
	for (int i = 0; i < rows; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
}
int main() {
	int rows;
	cout << "Enter number of rows: ";	
	cin >> rows;
	int** arr = new int* [rows];
	int* count = new int[rows];
	for (int i = 0; i < rows; ++i) {
		int n;
		cout << "Enter row " << i + 1 << "colums: ";
		cin >> n;
		arr[i] = new int[n];
		for (int j = 0; j < n; ++j) {
			cout << "Enter row " << i + 1 << " :";
			cin >> arr[i][j];
		}
		count[i] = n;
	}
	displayJaggedArray(arr, rows, count);
	findLargestInRows(arr, rows, count);
	findRowWithMaxSum(arr, rows, count);
	countTotalElements(arr, rows, count);
	deleteJaggedArray(arr, rows);

	return 0;
}