#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != i % 2)
            {
                if (arr[i] & 1)
                {
                    odd++;
                }

                else
                {
                    even++;
                }
            }
        }

        if (odd == even)
        {
            cout << even << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }
}