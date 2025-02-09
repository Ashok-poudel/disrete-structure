#include <iostream>

using namespace std;

// Recursive function to calculate the n-th Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    
    cout << "Fibonacci series up to " << n << " terms:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    
    return 0;
}

