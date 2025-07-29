#include <iostream>
using namespace std;
//bigger problem: print numbers from n to 1 using recursion
//smaller problem: print numbers from 2 to 1 using recursion

// A simple recursive function to print numbers from n to 1
void printDescending(int n) {
    if (n == 0) return; // Base case: stop when n reaches 0
    cout << n << " ";
    printDescending(n - 1); // Recursive call with n-1
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Printing numbers from " << n << " to 1 using recursion:\n";
    printDescending(n);
    cout << endl;
    return 0;
}