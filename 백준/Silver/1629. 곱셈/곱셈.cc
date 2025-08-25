#include <iostream>
#include <cmath>
using namespace std;
long long a,b,c;
long long func(long long x,long long y, long long z){
  if(y==1) return x%z;
  long long  val=func(x,y/2,z);
  val=val*val%z;

  if(y%2==0) return val;
  return val*x%z;

}
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>a>>b>>c;
   
    cout<<func(a,b,c);
    
    return 0;
}