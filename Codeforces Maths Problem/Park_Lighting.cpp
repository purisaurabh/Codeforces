#include<bits/stdc++.h>
using namespace std;
 
 
int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
      int n , m;
    cin>>m>>n;
    int res=m*(n/2);
    
    if(n%2) 
        res+=ceil(1.0*m/2);
        
    cout<<res<<endl;
  }
 
  return 0;
}
