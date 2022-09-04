#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    string s;
    cin >> s;
    ll n = s.size();
    ll cnt = 0;
    ll res = n / 2;
    if (n % 2 == 0)
    {
        cout << res;
        return 0;
    }

    for (auto c : s)
    {
        if (c == '1')
            cnt++;
    }
        

    res += (cnt > 1);
    cout << res;

    return 0;
}