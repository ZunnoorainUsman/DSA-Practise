#include <iostream>
using namespace std;

int main() {
    int arr[7] = { 10, 20, 30, 40, 50, 60, 70 }; // Sorted Array
    int target;
    cin >> target;
    int low = 0, high = 6, mid;
    int foundIndex = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        }
        if (arr[mid] < target)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }

    if (foundIndex != -1)
        cout << "Found at index: " << foundIndex;
    else
        cout << "Not found.";

    return 0;
}
