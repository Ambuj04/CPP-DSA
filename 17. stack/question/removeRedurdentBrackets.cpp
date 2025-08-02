#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool hasRedundantBrackets(const string& expr) {
    stack<char> st;
    for (char ch : expr) {
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } else if (ch == ')') {
            bool isRedundant = true;
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    isRedundant = false;
                }
                st.pop();
            }
            if (!st.empty()) st.pop(); // pop the '('
            if (isRedundant) return true;
        }
    }
    return false;
}

int main() {
    string expr;
    cout << "Enter expression: ";
    cin >> expr;
    if (hasRedundantBrackets(expr)) {
        cout << "Redundant brackets found.\n";
    } else {
        cout << "No redundant brackets.\n";
    }
    return 0;
}