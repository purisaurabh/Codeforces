#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l , r;
    cin >> l >> r;

    int x = 2 * l;

    if(x <= r)
        cout << l << " " << x << endl;

    else 
        cout << -1 << " " << -1 << endl;
}