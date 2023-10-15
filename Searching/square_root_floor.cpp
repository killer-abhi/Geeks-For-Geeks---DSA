#include <bits/stdc++.h>
using namespace std;

int sqrtFloor(int x, int low, int high)
{
    int mid = (low + high) / 2;
    int msqrt = mid * mid;
    if (msqrt == x)
    {
        return mid;
    }
    else if(high==low){
        return low;
    }
    else if (msqrt > x)
    {
        // high=mid-1;
        return sqrtFloor(x, low, mid - 1);
    }
    else
    {
        // low=mid+1;
        return sqrtFloor(x, mid + 1, high);
    }
}
int main()
{
    int x;
    cin >> x;
    int res = sqrtFloor(x, 1, x);
    if (res > 0)
    {
        cout << res;
    }
    return (0);
}