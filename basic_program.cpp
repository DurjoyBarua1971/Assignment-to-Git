#include <iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    cout << "Hello World!" << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Fibonacci of 6: " << fibonacci(6) << endl;
    return 0;
}