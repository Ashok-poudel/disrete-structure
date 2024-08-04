#include <iostream>

using namespace std;

// Function to calculate a^n recursively
double power(double a, int n) {
    // Base case: any number raised to the power of 0 is 1
    if (n == 0) {
        return 1;
    }
    // If n is negative, calculate the positive power and take reciprocal
    if (n < 0) {
        return 1 / power(a, -n);
    }
    // Recursive case
    return a * power(a, n - 1);
}

int main() {
    double a;
    int n;
    
    cout << "Enter base (a): ";
    cin >> a;
    
    cout << "Enter exponent (n): ";
    cin >> n;
    
    cout << a << "^" << n << " = " << power(a, n) << endl;
    
    return 0;
}

