#include <iostream>
#include <string>
using namespace std;

// 1
int square(int n) {
    return n * n;
}

// 2
bool isEven(int n) {
    return n % 2 == 0;
}

// 3
int maxOfTwo(int a, int b) {
    if (a > b) return a;
    else return b;
}

// 4
int sumToN(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s = s + i;
    }
    return s;
}

// 5
int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

// 6
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 7. Sum of digits
int sumOfDigits(int n) {
    int s = 0;
    while (n != 0) {
        s = s + n % 10;
        n = n / 10;
    }
    return s;
}

// 8
int reverseNumber(int n) {
    int r = 0;
    while (n != 0) {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    return r;
}

// 9
string toBinary(int n) {
    string b = "";
    if (n == 0) return "0";
    while (n > 0) {
        b = to_string(n % 2) + b;
        n = n / 2;
    }
    return b;
}

// 10
int power(int base, int exp) {
    int p = 1;
    for (int i = 0; i < exp; i++) {
        p = p * base;
    }
    return p;
}

// 11
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// 12
int arraySum(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s = s + arr[i];
    }
    return s;
}

int main() {
    cout << "square(5) -> " << square(5) << endl;
    cout << "isEven(4) -> " << (isEven(4) ? "true" : "false") << endl;
    cout << "isEven(7) -> " << (isEven(7) ? "true" : "false") << endl;
    cout << "maxOfTwo(3, 8) -> " << maxOfTwo(3, 8) << endl;
    cout << "sumToN(5) -> " << sumToN(5) << endl;
    cout << "factorial(5) -> " << factorial(5) << endl;
    cout << "isPrime(7) -> " << (isPrime(7) ? "true" : "false") << endl;
    cout << "isPrime(4) -> " << (isPrime(4) ? "true" : "false") << endl;
    cout << "sumOfDigits(123) -> " << sumOfDigits(123) << endl;
    cout << "reverseNumber(123) -> " << reverseNumber(123) << endl;
    cout << "toBinary(10) -> " << toBinary(10) << endl;
    cout << "power(2, 3) -> " << power(2, 3) << endl;
    cout << "fibonacci(6) -> " << fibonacci(6) << endl;

    int a[4] = { 1, 2, 3, 4 };
    cout << "arraySum({1, 2, 3, 4}, 4) -> " << arraySum(a, 4) << endl;

    return 0;
}
