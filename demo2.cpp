#include <iostream>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    // Test the factorial function
    int num = 5;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    
    return 0;
}
