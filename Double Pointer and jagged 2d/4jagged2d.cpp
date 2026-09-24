#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char** arr = new char* [n];
	int* size = new int[n];
	for (int i = 0; i < n; ++i) {
		int l;
		char temp[100];
		cout << "ENter: ";
		cin >> temp;
		l = strlen(temp);
		size[i] = l;
		arr[i] = new char[l + 1];
		strcpy(arr[i], temp);
	}
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << endl;
	}

	


	for (int i = 0; i < n; ++i)
		delete[] arr[i];
	delete[]arr;


	return 0;
}