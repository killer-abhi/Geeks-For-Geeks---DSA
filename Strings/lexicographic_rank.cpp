#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int findLexicohraphicRank(string str)
{
    string org = str;
    sort(str.begin(), str.end());

    int n = str.length();
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (org[i] != str[i])
        {
            int small = str.find(org[i]);
            res = res + (small * fact(small));
        }
    }
    return res + 1;
}

int main()
{
    string str;
    cin >> str;
    cout << "Lexicographic Rank = " << findLexicohraphicRank(str);
    return (0);
}