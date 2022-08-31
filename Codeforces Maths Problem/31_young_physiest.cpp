#include <iostream>
using namespace std;
 
int main()
{
    int a , sum_1 , sum_2 , sum_3;
 
    int n;
    cin >> n;
    int arr[100][100];
 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin >> arr[i][j];
        }
 
        sum_1 += arr[i][0];
        sum_2 += arr[i][1];
        sum_3 += arr[i][2];
    }
 
    if(sum_1 == 0 && sum_2 == 0 && sum_3 == 0)
    {
        cout << "YES" << endl;
    }
 
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}