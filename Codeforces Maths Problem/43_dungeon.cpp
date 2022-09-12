#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a , b , c;
        cin >> a >> b >> c;
        
        ll sum = a + b + c;
        ll s = (sum)/9;
        
        if(sum % 9 == 0 && a >= s && b >= s && c >= s)
        {
            cout << "Yes" << endl;
        }
        
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}