#include<iostream>
using namespace std;

int strlen(char* arr)
{
	int i = 0;
	while (arr[i] != '\0')
		i++;
	return i;
}
char** arr(int &n)
{
	if (n < 1)
		n = 1;
	char** p = new char* [n];
	for (int i = 0; i < n; ++i)
		p[i] = new char[20];
	return p;
}
void input(char** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}
void longAndShortName(char** arr, int n, int& l, int& s)
{
	int longest= strlen(arr[0]);
	int shortest = strlen(arr[0]);
	l = 0;
	s = 0;
	for (int i = 1; i < n; ++i)
	{
		int current = strlen(arr[i]);
		if (current > longest)
		{
			longest = current;
			l = i;
		}
		if (current < shortest) {
			shortest = current;
			s = i;
		}
	}

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

int main()
{
	int size;
	cin >> size;
	char** cities = arr(size);
	input(cities, size);
	int l, s;
	longAndShortName(cities, size, l, s);
	cout << "Longest : " << cities[l] << endl;
	cout << "Shortest : " << cities[s] << endl;
	freeAll(cities, size);
	return 0;
}