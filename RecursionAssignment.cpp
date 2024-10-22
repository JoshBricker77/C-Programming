#include <iostream>
using namespace std;

// Calculates the factorial of a number iteratively
// @param n: the number to calculate the factorial for
long long int factorial(int n) {
    long long int result = 1; // Initialize result
    for (int i = 2; i <= n; i++) {
        result *= i; // Multiply each number up to n
    }
    return result; // Return the final result
}

// Returns the nth Fibonacci number recursively
// @param n: the position in the Fibonacci sequence
int fibonacci(int n) {
    if (n == 0) return 0;  // Base case: Fibonacci(0) = 0
    if (n == 1) return 1;  // Base case: Fibonacci(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive calculation
}

int main() {
    int num;
    cout << "Enter a number for factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;  // Output factorial result

    // Display Fibonacci sequence up to the 10th number
    cout << "Fibonacci sequence up to the 10th number:\n";
    for (int i = 0; i <= 10; i++) {
        cout << fibonacci(i) << " ";  // Print each Fibonacci number
    }
    cout << endl;
    
    return 0;
}
