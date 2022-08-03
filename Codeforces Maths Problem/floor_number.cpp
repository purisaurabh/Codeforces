#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , x;
    cin >> n >> x;

    if(n == 1 || n == 2)
    {
        cout << 1 << endl;
    }

    else
    {
        n -= 2;
        int ans = ceil(1.0*n/x) + 1;
        cout << ans << endl;
    }

    return 0;
}