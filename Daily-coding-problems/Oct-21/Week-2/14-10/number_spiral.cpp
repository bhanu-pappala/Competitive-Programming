#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> y >> x;
        ll z = max(x, y);
        ll z2 = (z-1) * (z-1), ans;
        if(z % 2)
        {
            if (z == y)
                ans = z2 + x;
            else
                ans = z2 + 2*z - y;
        }
        else
        {
            if (z == x)
                ans = z2 + y;
            else
                ans = z2 + 2*z - x;
        }
        cout << ans << "\n";
    }
}
