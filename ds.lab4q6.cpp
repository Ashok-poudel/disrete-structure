#include <iostream>

using namespace std;

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if x is present at mid
        if (arr[mid] == x) {
            return mid;
        }

        // If x is greater, ignore the left half
        if (arr[mid] < x) {
            left = mid + 1;
        }
        // If x is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    // If the element is not found
    return -1;
}

int main() {
    int n, x;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements (sorted in ascending order): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}

