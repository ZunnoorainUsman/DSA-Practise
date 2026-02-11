#include<iostream>
using namespace std;
int sumDigits(int num)
{
	int sum = 0;
	for (num; num > 0; num /= 10)
	{
		int mod = num % 10;
		sum += mod;
	}
	return sum;
}

int main()
{
	cout << sumDigits(2356);
	return 0;
}