#include<iostream>
using namespace std;
int main()
{
	int* p = new int;
	cout << "entr a value: ";
	cin >> *p;
	cout << "before del: " << *p <<" |adress: "<<p<< endl;
	delete p;
	//cout << "after del: " << *p << " |adress: " << p << endl;
	// This creates a dangling pointer.
	// Accessing it causes UNDEFINED BEHAVIOR
	p = nullptr;
	// CORRECT METHOD
	// Assign nullptr after delete
	 // nullptr means pointer points to nothing
	if (p == nullptr)
		cout << "p is now nullptr." << endl;
	cout << "after del and nullptr: " << " adress: " << p << endl;

	return 0;
}
/*
   Incorrect Method:
    After delete Pointer becomes a danglilng pointer
    accessing it leadss to undefined behavior
    May cause crashes or garbage values

   Correct Method:
    after delete, assign nullptr to pointe
    pointer safely indicates no valid memory
    prevents accidental memory access
   */
