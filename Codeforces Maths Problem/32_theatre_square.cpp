#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n , m , l;
    cin >> n >> m >> l;
    long long ans = 0;
    ans += ceil(1.0*n/l)*ceil(1.0*m/l);
    
    cout << ans << endl;
    return 0;
}