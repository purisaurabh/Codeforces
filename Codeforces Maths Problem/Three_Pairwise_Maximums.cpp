#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  while(t--)
  {
    int x , y , z;
    cin >> x >> y >> z;
    if(x>y) 
        swap(x,y);
    
    if(x>z) 
        swap(x,z);
    
    if(y>z) 
        swap(y,z);
   
    if(y!=z) 
        cout<<"NO"<<endl;
    else 
        cout<<"YES"<<endl<<x<<" "<<x<<" "<<z<<endl;
      
  }
 
  
  return 0;
}