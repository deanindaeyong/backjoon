#include <iostream>
#include <cmath>
using namespace std;
string a;
int l;
int main() 
{   cin>>l;
    cin>>a;
    int r=31;
    int m=1234567891;
    int sum=0;
    
    for(int i=0;i<l;i++){
      sum=sum+(a[i]-'a'+1)*(pow(r,i));
 
    }
   
    cout<<sum;
    
    return 0;
}