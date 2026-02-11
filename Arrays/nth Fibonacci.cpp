#include<iostream>
using namespace std;
int fibonacci(int n)
{
	int a = 0, b = 1, next;
	for (int i = 2; i <= n; ++i) {
		next = a + b;
		a = b;
		b = next;
	}
	return a;
}
int main()
{
	int f = 4;
	cout << fibonacci(f+1);

	return 0;
}