#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a , b , c , n;
        cin >> a >> b >> c >> n;
        
        long long int total = a + b + c + n;
        
        if(total % 3 != 0)
            cout << "NO" << endl;
        
        else
        {
            if(a > total/3 || b > total/3 || c > total/3)
                cout << "NO" << endl;
                
            else
                cout << "YES" << endl;
        }
    }
    
    return 0;
}