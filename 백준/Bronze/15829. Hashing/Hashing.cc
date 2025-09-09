#include <iostream>
#include <cmath>

using namespace std;
string a;
int l;
long long m=1234567891;
long long power(long long a, long long b){
 if(b==1){
   return a;
 }else if(b==0){
   return 1;
 }
 return a*power(a,b-1)%m;
}
int main() 
{   cin>>l;
    cin>>a;
    long long r=31;
    
    long long sum=0;
    
    for(int i=0;i<l;i++){
      sum=(sum+(a[i]-'a'+1)*(power(r,i)))%m;
      
    }
   
    cout<<sum;
  //cout<<power(4,4);
    
    return 0;
}