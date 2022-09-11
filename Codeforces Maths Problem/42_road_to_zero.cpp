#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x , y;
        cin >> x >> y;
        ll a , b;
        cin >> a >> b;
        
        ll ans = 0;
        if(x > y)
        {
            swap(x , y);
        }
        
        ans += (y-x)*a;
        
        if(2*a < b)
        {
            ans += x*(2*a);
        }
        
        else
        {
            ans += (x *b);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}