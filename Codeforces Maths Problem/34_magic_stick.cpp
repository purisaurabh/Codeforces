#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int x , y;
        cin >> x >> y;
        
        if(x == 1 && y > 1)
        {
            cout << "NO" << endl;
        }
        
        else if(x <= 3 && y > 3)
        {
            cout << "NO" << endl;
        }
        
        else
        {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}