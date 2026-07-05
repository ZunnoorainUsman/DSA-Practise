#include<iostream>
using namespace std;
void out(int* p, int n)
{
	cout << endl << "Array: ";
	for (int i = 0; i < n; ++i)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
int main()
{
	int n;
	cout << "Size: ";
	cin >> n;
	if (n < 1)
		return 1;

	int* arr = new int[n];
	cout << "original: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cout << "Before shrink: ";
	out(arr, n);
	int newSize = n-1;
	int* newArr = new int[newSize];
	for (int i = 0; i < newSize; ++i)
	{
		newArr[i] = arr[i];
	}
	delete[]arr;
	arr = newArr;
	cout << "after shrinling: ";
	out(arr, newSize);
	cout << "new size: " << newSize;


	return 0;
}
