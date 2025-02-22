#include <iostream>
#include <chrono>  // For measuring execution time

using namespace std;
using namespace std::chrono;  // Namespace for time measurement

// Recursive factorial function
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    // Start time measurement
    auto startTime = high_resolution_clock::now();

    // Compute factorial
    long long result = factorial(num);

    // End time measurement
    auto endTime = high_resolution_clock::now();
    auto runtime = duration_cast<nanoseconds>(endTime - startTime).count();

    // Output the result and runtime
    cout << "The factorial of " << num << " is: " << result << endl;
    cout << "Runtime: " << runtime << " nanoseconds" << endl;

    return 0;
}
