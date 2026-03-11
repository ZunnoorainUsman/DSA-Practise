#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[50];
	int count = 0;
	fstream fin("numbers.txt");
	if (!fin)
	{
		cout << "Not found";
		return 0;
	}
	int i = 0;
	while (fin >> arr[i])
	{
		cout << arr[i] << " ";
		count++;
		i++;
	}
	fin.close();
	cout << endl;
	cout << "Count is: " << count << endl;
	int largest, secondLargest;
	if (arr[0] > arr[1])
	{
		largest = arr[0];
		secondLargest = arr[1];
	}
	else
	{
		largest = arr[1];
		secondLargest = arr[0];
	}
	for (int i = 2; i < count; ++i)
	{
		if (arr[i] > largest)
		{
			secondLargest = largest;
			largest = arr[i];
		}
		else if (arr[i] > secondLargest)
		{
			secondLargest = arr[i];
		}
	}
	cout << "Largest is: " << largest << endl;
	cout << "2nd Largest is: " << secondLargest << endl;
	return 0;
}
