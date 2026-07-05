#include<iostream>
using namespace std;
void input(int* p, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter value " << i + 1 << " : ";
		cin >> p[i];
	}
}
void output(int* p, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << p[i]<<" ";
	}
	cout << endl;
}
int main()
{
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	if (size <= 0)
	{
		cout << "invalid size";
		return 0;
	}
	int* p = new int[size];
	input(p, size);
	output(p, size);
	delete[]p;
	p = nullptr;
	return 0;
}
