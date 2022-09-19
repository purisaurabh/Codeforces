
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll get_next_value(ll num)
{
    ll first_value = -1, second_value = 10;
    while (num > 0)
    {
        ll digit = num % 10;
        first_value = max(first_value, digit);
        second_value = min(second_value, digit);
        num /= 10;
    }
    return first_value * second_value;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a , k;
        cin >> a >> k;
        while (--k)
        {
            ll next = a + get_next_value(a);
            if (a == next)
                break;
            a = next;
        }
        cout << a << endl;
    }
    return 0;
}