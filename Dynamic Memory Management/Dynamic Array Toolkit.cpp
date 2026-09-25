#include <iostream>
using namespace std;

int* createDynamicArray(int n) {
	return new int[n];
}
void inputArr(int* arr, int n) {
	for (int i = 0; i < n; ++i) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}
}
void findLargestAndSmallest(int* arr, int n, int& large, int& small) {
	if(arr == nullptr || n <= 0) {
		cout << "Array is empty or invalid size." << endl;
		return;
	}
	large = arr[0];
	small = arr[0];
	for (int i = 1; i < n; ++i) {
		if (arr[i] > large) {
						large = arr[i];
		}
		if (arr[i] < small) {
			small = arr[i];
		}
	}
}
void reverseArray(int* arr, int n) {
	int* start = arr;
	int* end = arr + n - 1;
	while (start < end) {
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
void countEvenOdd(int* arr, int n, int& evenCount, int& oddCount) {
	evenCount = 0;
	oddCount = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] % 2 == 0) {
			evenCount++;
		} else {
			oddCount++;
		}
	}
}
void delArr(int* arr) {
	delete[]arr;
}
int main() {
	int n;
	cin >> n;
	int* arr = createDynamicArray(n);
	inputArr(arr, n);
	int largest, smallest;
	findLargestAndSmallest(arr, n, largest, smallest);
	cout << "Largest: " << largest << ", Smallest: " << smallest << endl;
	reverseArray(arr, n);
	cout << "Reversed array: ";
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int evenCount, oddCount;
	countEvenOdd(arr, n, evenCount, oddCount);
	cout << "Even count: " << evenCount << ", Odd count: " << oddCount<< endl;

	delArr(arr);
	return 0;
}