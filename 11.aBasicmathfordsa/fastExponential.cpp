#include <iostream>
using namespace std;
long long modPower(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;  // always reduce base first
    while (exp > 0) {
        if (exp & 1)  // if exponent is odd
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1; // divide exponent by 2
    }
    return result;
}
int main() {
    long long a = 2;
    long long b = 10;
    long long mod = 1e9 + 7;
    cout << "Result: " << modPower(a, b, mod) << endl; // Output: 1024
    return 0;
}
