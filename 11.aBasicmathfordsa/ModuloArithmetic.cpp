#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Modular exponentiation
long long modPower(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Modular inverse (when MOD is prime)
long long modInverse(long long b, long long mod) {
    return modPower(b, mod - 2, mod);
}

int main() {
    long long a = 25;
    long long b = 4;

    long long add = (a + b) % MOD;
    long long sub = (a - b + MOD) % MOD;
    long long mul = (a * b) % MOD;
    long long div = (a * modInverse(b, MOD)) % MOD;

    cout << "Add: " << add << endl;
    cout << "Subtract: " << sub << endl;
    cout << "Multiply: " << mul << endl;
    cout << "Divide: " << div << endl;

    return 0;
}
