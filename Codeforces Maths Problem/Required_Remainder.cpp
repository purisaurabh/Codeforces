#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long int x , y , n;
        cin >> x >> y >> n;
        int rem = n % x;
        int change = (rem - y + x) % x;
        n -= change;
        cout << n << endl;
    }

    return 0;
}