#include<iostream>
#include<cstring>
using namespace std;

void encrypt(char* start, char* end, int key)
{
	while (start < end)
	{
		*start++ += key;
	}
	/* Post-increment (++) has higher precedence than dereference (*), but
   because it's 'post', the original address is used for the += operation
   before the pointer moves. The increment is a side effect that occurs
   only after the current character is encrypted.
   */
}

int main()
{
	char buffer[] = { "SecretMessage" };
	int size = strlen(buffer);
	int key = 3;

	cout << "Original: " << buffer << endl;
	encrypt(buffer, buffer + size, key);

	const char* reader = buffer;
	cout << "Encrypted: ";
	while (*reader != '\0')
	{
		cout << *reader;
		reader++;
	}
	cout << endl;
	return 0;
}