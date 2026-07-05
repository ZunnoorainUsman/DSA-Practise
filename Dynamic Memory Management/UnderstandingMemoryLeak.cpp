#include<iostream>
using namespace std;

int main()
{
	int* p = new int;
	cout << "entr a value: ";
	cin >> *p;
	cout << *p << endl;
	p = new int;
	cout << "after reassihning value it gave is: " << *p << endl;

	*p = 100;
	cout << "after assigning new value: ";
	cout << *p << endl;

	return 0;
}
/*program didnt crashed it run
and i didnt get any eror due to meemory leak
p is assigned to other value and the 1st value adress is lost 
we can not del it becoause nobody holds its address.
*/
