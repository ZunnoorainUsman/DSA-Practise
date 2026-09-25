#include <iostream>
#include <fstream>
using namespace std;

int* ReadingIntoArr(int& size) {
	ifstream fin("integers.txt");
	int temp;
	size = 0;
	while (fin >> temp) {
		size++;
	}
	fin.close();
	int* arr = new int[size];
	ifstream fin2("integers.txt");
	int i = 0;
	while (i < size) {
		fin2 >> arr[i];
		i++;
	}
	return arr;
}
void display(int* arr, int n) {
	cout << "Array: ";
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void SaveResultToAFile(int* arr, int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0 ; j < n - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	ofstream fapp("results.txt");
	int i = 0;
	fapp << "Sorted Arr Acsending: ";
	while (i < n) {
		fapp << arr[i] << " ";
		i++;
	}
	fapp << endl;
	for (int i = 0; i < n - 1; ++i) {
		int index = i;
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] > arr[index]) {
				index = j;
			}
		}
		if (index != i) {
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}
	int j = 0;
	fapp << "Sorted Arr Descending: ";
	while (j < n) {
		fapp << arr[j] << " ";
		j++;
	}
	fapp << endl;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += arr[i];
	}
	float average = static_cast<float>(sum) / n;
	fapp << "Average: " << average << endl;	
	fapp.close();
}
void deleteArr(int* arr) {
	delete[] arr;
}
int main()
{
	int size;
	int* arr = ReadingIntoArr(size);
	display(arr, size);
	SaveResultToAFile(arr, size);
	deleteArr(arr);
	return 0;
}
