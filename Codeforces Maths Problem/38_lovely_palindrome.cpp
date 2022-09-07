#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string original = str;
    reverse(str.begin() , str.end());
    cout << original+str << endl;
}