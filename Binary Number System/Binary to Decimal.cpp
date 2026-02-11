#include<iostream>
using namespace std;
int binaryToDec(int binaryNum)
{
	int ans = 0, power = 1;//pow = 2^0=1
	while (binaryNum > 0)
	{
		int rem = binaryNum % 10;
		ans += (rem * power);
		binaryNum /= 10;
		power *= 2;
	}
	return ans;//decimal
}

int main()
{
	cout << binaryToDec(101);
	return 0;
}