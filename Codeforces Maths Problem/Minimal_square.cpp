#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m , n;
        cin >> m >> n;
        if(n < m)
            n = n * 2;

        else
            m = m * 2;

        int ans = max(n, m);
        cout << ans*ans << endl;
    }
}