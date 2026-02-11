#include<iostream>
using namespace std;
int fact(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; ++i)
	{
		sum = sum * i;
	}
	return sum;
}
int nCr(int n, int r) {
	int fact_n = fact(n);
	int fact_r = fact(r);
	int fact_nmr = fact(n-r);

	return fact_n / (fact_r * fact_nmr);
}
int main()
{
	int n = 6, r = 3;
	cout << nCr(n, r);

	return 0;
}