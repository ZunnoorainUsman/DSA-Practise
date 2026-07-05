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
int distintVal(int* p, int n)
{
	int d = 0;
	for (int i = 0; i < n; ++i)
	{
		bool already = false;
		for (int j = 0; j < i; ++j)
		{
			if (p[j] == p[i])
				already = true;
		}
		if (!already)
			d++;
	}
	return d;
}
int main()
{
	int n;
	cout << "Enter arr size: ";
	cin >> n;
	int* p = createArr(n);
	fillArray(p, n);
	printArr(p, n);
	int distint = distintVal(p, n);
	cout << "distint val are: " << distint << endl;
	delete[]p;
	p = nullptr;
	return 0;
}
