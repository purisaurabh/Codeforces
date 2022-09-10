#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , m ,k;
        cin >> n >> m >> k;

        ll each_card = n / k;
        if(each_card >= m)
        {
            cout << m << endl;
        }

        else
        {
            ll remaining = m - each_card;
            ll remainder = ceil(1.0*remaining/(k-1));
            cout << each_card - remainder << endl;
        }
    }
}