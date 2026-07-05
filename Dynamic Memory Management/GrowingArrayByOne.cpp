#include<iostream>
using namespace std;

int* createArr(int n)
{
	int* p = new int[n];
	return p;
}
void fillArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter value " << i + 1 << " : ";
		cin >> a[i];
	}
}
void printArr(int* p, int size)
{
	cout << "Array eleemsts: ";
	for (int i = 0; i < size; ++i)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
void copyArr(int* p, int* p1, int n)
{
	for (int i = 0; i < n; ++i)
	{
		p1[i] = p[i];
	}
}
int main()
{
	int n;
	cout << "Enter arr size: ";
	cin >> n;
	int* p = createArr(n);
	fillArray(p, n);
	cout << "original array: ";
	printArr(p, n);
	int newSize = n + 1;
	int* newArr = new int[newSize];
	copyArr(p, newArr, n);
	delete[]p;
	p = newArr;
	p[newSize-1] = 40;
	cout << "after growing by 1 array: ";
	printArr(p, newSize);
	
	delete[]p;
	p = nullptr;
	return 0;
}
