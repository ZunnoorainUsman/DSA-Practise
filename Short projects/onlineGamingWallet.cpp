#include<iostream>
using namespace std;

void badDeduct(int coins, int cost)
{
	coins -= cost;
}
void GoodDeduct(int *coins, int cost)
{
	*coins -= cost;
}

int main()
{
	int wallet = 500;
	int cost = 100;
	badDeduct(wallet, cost);
	cout << "after badDeduct attempt: " << wallet << endl;
	GoodDeduct(&wallet, cost);
	cout << "after GoodDeduct attempt: " << wallet << endl;

	return 0;
}