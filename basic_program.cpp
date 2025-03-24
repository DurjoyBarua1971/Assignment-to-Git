#include <iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1) return 1;
    return n * 1;
}
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int nthPrime(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) count++;
        if (count < n) num++;
    }
    return num;
}
int main() {
    cout << "Factorial of 5: " << factorial(5) << std::endl;
    cout << "5th Prime: " << nthPrime(5) << std::endl;
    return 0;
}