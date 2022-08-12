#include<iostream>
using namespace std;

int main()
{
    int k , r;
    cin >> k >> r;
    int v = k;
    for(int i = 1; i <= 10 ; i++)
    {
        v = k * i;
        if(v % 10 == 0 || v % 10 == r)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
    
}