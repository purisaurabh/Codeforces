#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x, y, z;
    cin >> x >> y >> z;

    ll total = (x + y) / z;
    cout << total << " ";

    ll ans = x / z + y / z;

    ll a = z - (y % z);
    ll b = z - (x % z);

    if (total > ans)
        cout << min(a, b);
        
    else
        cout << 0;

    return 0;
}