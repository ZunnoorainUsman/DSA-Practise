#include<iostream>
using namespace std;

int factorial(int num)
{
	int total = 1;
	for (int i = 1; i <= num; ++i)
	{
		total *= i;
	}
	return total;
}
int main()
{
	cout << factorial(5);
	return 0;
}
