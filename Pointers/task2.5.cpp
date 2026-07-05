#include<iostream>
using namespace std;

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* start = &arr[0];
    int* end = &arr[4];
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    cout << "reveresed array: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}