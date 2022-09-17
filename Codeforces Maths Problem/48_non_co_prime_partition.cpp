#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 2)
    {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    cout << n - 1;
    for (int i = 1; i <= n - 1; i++)
    {
        cout << " " << i;
    }

    cout << endl;
    cout << 1 << " " << n;
    return 0;
}