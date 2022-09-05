#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll a , b , s;
    cin >> a >> b >> s;
    ll diff = s - abs(a)- abs(b);
    
    if(diff < 0 || diff % 2)
    {
        cout << "No" << endl;
    }
    
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}
