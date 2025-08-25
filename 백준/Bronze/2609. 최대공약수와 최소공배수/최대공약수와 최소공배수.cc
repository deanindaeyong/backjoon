#include <iostream>
using namespace std;
int m,n;
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
   cin>>m>>n;
   
   int smaller,bigger;
   if(m>n){
     smaller=n;
     bigger=m;
   }else {
     smaller=m;
     bigger=n;
   }
   //최대공약수
   int BDN;
   
   int x=smaller;
   if(bigger%x==0){
     BDN=x;
   }else{
   
   while(--x){
     if(bigger%x==0 &&smaller%x==0){
       BDN=x;
       break;
     }
   }
     
   }
   //최소 공배수
   int SMN;
   int y=bigger;
   if(y%smaller==0){
     SMN=y;
   }else{
   while(++y){
     if(y%n==0&& y%m==0){
       
       SMN=y;
       break;
     }
   }
   }
   cout<<BDN<<'\n';
   cout<<SMN;
 
    return 0;
}