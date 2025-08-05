#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true); // step 1: all marked true
    isPrime[0] = isPrime[1] = false;   // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        
        if (isPrime[i]) {
            // mark all multiples of i as false
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Print all primes
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the upper limit for prime numbers: ";
    cin >> n;

    sieveOfEratosthenes(n);

    return 0;
}