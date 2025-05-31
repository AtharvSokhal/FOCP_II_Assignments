#include<iostream>
using namespace std;

// Global declaration
bool is_not_prime(int n);

int main() {
    // Declaring and taking input from user
    int n;
    cout << "Enter a number greater than 0: ";
    cin >> n;

    // If number is 1
    if (n == 1) {
        cout << "Factor is 1.";
        return 0;
    }

    // If n is not prime, print its factors
    if (is_not_prime(n)) {
        cout << "Factors of " << n << " are: 1,";
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                cout << i << ",";
            }
        }
        cout << n;
    } else { // If n is a prime number, find and print the next prime number
        int next = n + 1;
        while (!is_not_prime(next)) {
            next++;
        }
        cout << "Next prime number is " << next << ".";
    }

    return 0;
}

// Function to check if the given number is NOT prime
bool is_not_prime(int n) {
    if (n <= 1) return true;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return true; // Not prime
        }
    }
    return false; // Prime
}
