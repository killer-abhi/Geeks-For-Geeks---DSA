#include <bits/stdc++.h>
using namespace std;
char associativity(char c)
{
    if (c == '^')
        return 'R';
    return 'L';
}
int getPrecedence(char symbol)
{
    if (symbol == '^')
    {
        return 3;
    }
    else if (symbol == '*' || symbol == '/')
    {
        return 2;
    }
    else if (symbol == '+' || symbol == '-')
    {
        return 1;
    }
    else if (symbol == '(' || symbol == ')')
    {
        return 0;
    }
}

int checkSymbol(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
    {
        return 2;
    }
    else if (x == '(' || x == ')')
    {
        return 1;
    }
    return 0;
}

void printPostfix(string str)
{
    stack<char> st;
    string res;
    for (int i = 0; i < str.length(); i++)
    {
        char x = str[i];

        // Operand check
        if (checkSymbol(x) == 0)
        {
            res += x;
        }
        else if (x == '(' && checkSymbol(x) == 1)
        {
            st.push(x);
        }
        else if (x == ')' && checkSymbol(x) == 1)
        {
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (checkSymbol(x) == 2)
        {
            if (st.empty())
            {
                st.push(x);
            }
            else
            {
                while (!st.empty() && getPrecedence(x) < getPrecedence(st.top()) ||
                       !st.empty() && getPrecedence(x) == getPrecedence(st.top()) &&
                           associativity(x) == 'L')
                {
                    res += st.top();
                    st.pop();
                }
                st.push(x);
            }
        }
    }
    while (!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    cout<<"\n"<<"Postfix :: "<<res;
}

int main()
{
    string str;
    cin >> str;
    printPostfix(str);
    return (0);
}