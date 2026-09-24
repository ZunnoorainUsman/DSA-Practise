#include<iostream>
using namespace std;

void input(int* p, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "ENter " << i + 1 << " :";
		cin >> p[i];
	}
}
void display(int* p, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "Medicine " << i + 1 << " : " << *(p + i) << " units" << endl;
	}
}
void reduce(int* p, int n)
{
	for (int i = 0; i < n; ++i)
	{
		*(p + i) -= 10;
		if (*(p + i) < 0)
			*(p + i) = 0;

	}
	for (int i = 0; i < n; ++i)
	{
		if (*(p + i) > 0)
			cout << "Medicine " << i + 1 << " : " << *(p + i) << " units" << endl;
		else
			cout << "Medicine " << i + 1 << " : " << *(p + i) << " units warning :stock deplated" << endl; 
	}

}
void deepcopy(int* source, int* destination, int n)
{
	for (int i = 0; i < n; ++i)
	{
		*(destination + i) = *(source + i);
	}
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	input(arr, n);
	display(arr, n);
	cout << endl;
	reduce(arr, n);
	cout << endl;
	int head[6];
	deepcopy(arr, head, n);
	head[1] = -1;
	head[4] = -1;
	display(arr, n);
	display(head, n);
	delete[]arr;
	arr = nullptr;

	return 0;
}