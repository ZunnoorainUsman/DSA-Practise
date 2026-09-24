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
		arr[i] = new char[l+1];
		strcpy(arr[i], temp);
	}
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << endl;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < size[i]; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}