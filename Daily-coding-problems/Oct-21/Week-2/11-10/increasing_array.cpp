#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() 
{
    int n;
    cin >> n;
    int mx = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mx = max(mx, a);
        ans += mx - a;
    }
    cout << ans;
    return 0;
}
