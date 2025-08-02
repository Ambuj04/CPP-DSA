#include <iostream>
#include <stack>
using namespace std;
int isRedundant(string s)
{
    stack<char> st;
    char remainingOp;
    char topElem;
    if (s.empty())
    {
        return false;
    }
    for (char ch : s)
    {
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            if (!st.empty())
            {
            topElem = st.top();
            if (topElem == '+' || topElem == '-' || topElem == '*' || topElem == '/')
            {
                while (topElem == '+' || topElem == '-' || topElem == '*' || topElem == '/')
                {
                st.pop();

                
                if (!st.empty())
                    topElem = st.top();
                else
                    return 1;
                }


                if (!st.empty())
                {
                topElem = st.top();
                if (topElem == '(')
                {
                    st.pop();
                }
                }
                else
                {
                return 1;
                }
            }
            else if (topElem == '(')
            {
                // Redundant brackets found
                return 1;
            }
            }
            else
            {
            return 1;
            }
        }
    }
    // if operator is remaining
    if (!st.empty())
    {
        remainingOp = st.top();
    }
    if (st.empty() || remainingOp == '+' || remainingOp == '-' || remainingOp == '*' || remainingOp == '/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    string s1;
    s1 = "A*(B-C)";
    if(isRedundant(s1)){
        cout<<"redundant found";
    }else{
        cout<<"not found";
    };
    return 0;
}