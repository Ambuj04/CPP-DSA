#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> simpleSieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i <= limit; i++)
        if (isPrime[i])
            primes.push_back(i);
    return primes;
}

void segmentedSieve(int L, int R) {
    int limit = sqrt(R);
    vector<int> basePrimes = simpleSieve(limit);

    vector<bool> isPrimeSegment(R - L + 1, true);

    for (int p : basePrimes) {
        // Find the first multiple of p in range [L, R]
        int start = max(p * p, ((L + p - 1) / p) * p);
        for (int j = start; j <= R; j += p) {
            isPrimeSegment[j - L] = false;
        }
    }

    // Handle edge case where L == 1
    if (L == 1) isPrimeSegment[0] = false;

    for (int i = 0; i < isPrimeSegment.size(); i++) {
        if (isPrimeSegment[i])
            cout << (i + L) << " ";
    }
}
int main() {
    int L, R;
    cout << "Enter the range [L, R]: ";
    cin >> L >> R;

    cout << "Primes in range [" << L << ", " << R << "] are: ";
    segmentedSieve(L, R);
    cout << endl;

    return 0;
}
