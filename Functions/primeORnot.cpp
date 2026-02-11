#include<iostream>
using namespace std;

bool primeNo(int n) {
	int count = 0;
	
	for (int i = 1; i <= n; ++i)
	{
		if ( n % i == 0) {
			count++;
		}
		
	}
	if (count == 2) {
		return true;
	}
	else {
		return false;
	}

}
int main()
{
	int prime = 12;
	if (primeNo(prime))
	{
		cout << "YEs";
	}
	else {
		cout << "NO";
	}

	return 0;
}