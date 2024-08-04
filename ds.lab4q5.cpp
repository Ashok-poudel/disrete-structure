#include <iostream>

using namespace std;

// Function to perform linear search on an array
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int n, x;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    cout << "Enter the element to search for: ";
    cin >> x;
    
    int result = linearSearch(arr, n, x);
    
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    
    return 0;
}

