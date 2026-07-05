#include<iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[] = { 64, 25, 12, 22, 11,23,12,3,2,1,4,4 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    for (int* i = arr; i < arr + size - 1; i++)
    {
        int* minPtr = i;
        for (int* j = i + 1; j < arr + size; j++) {

            if (*j < *minPtr) {
                minPtr = j;
            }
        }
        if (minPtr != i) {
            swap(i, minPtr);
        }
    }
    cout << "Sorted array:   ";
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
	return 0;
}
