#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n <= 5)
    {
        cout << 1 << endl;
    }
    
    else
    {
        int count = 0;
        while( n >= 5)
        {
            n -= 5;
            count++;
        }
        
        if(n > 0)
            cout << count + 1 << endl;
        
        else
            cout << count << endl;
    }
    
    return 0;
}
