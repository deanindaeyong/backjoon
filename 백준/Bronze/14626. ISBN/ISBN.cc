#include <iostream>
using namespace std;

int main() 
{   string a;
    cin>>a;
    int len=a.length();
    int m=0;
    int pos=len-1;
   
    int temp=0;
    for(int i=0;i<len-1;i++){
      if(a[i]=='*'){pos=i;continue;}
      if(i%2==0)temp=(temp+a[i]-'0')%10;
      else temp=(temp+3*(a[i]-'0'))%10;
    }
    if(pos==len-1){
       a[pos]=(10-temp%10)%10+'0';
    }
   else if(pos%2==0){
  a[pos] = ((10 - (((a[len-1]-'0') + (temp%10)) % 10)) % 10) + '0';
} else a[pos] = ((((10 - (((a[len-1]-'0') + (temp%10)) % 10)) % 10) * 7) % 10) + '0';
    cout<<a[pos];
    
    return 0;
}