#include<iostream>
using namespace std;

int sumN(int n) {
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int howMany;
	cin >> howMany;
	cout << sumN(howMany);
	return 0;
}