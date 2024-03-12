#include <bits/stdc++.h>
using namespace std;

void generateNumbers(int n, string digits)
{
    queue<string> q;
    for (int i = 0; i < digits.length(); i++)
    {
        string c(1, digits[i]);
        q.push(c);
    }
    for (int i = 0; i < n; i++)
    {
        string cur = q.front();
        q.pop();
        cout << cur << '\t';
        for (int i = 0; i < digits.length(); i++)
        {   
            q.push(cur+digits[i]);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter count of numbers to be generated :: ";
    cin >> n;
    string digits;
    cout<<"Cout enter digits in string :: ";
    cin>>digits;
    generateNumbers(n,digits);
    return (0);
}