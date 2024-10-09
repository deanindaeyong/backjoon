#include <iostream>
#include <algorithm>

using namespace std;

/*void sortt(int a,int b, int c){
  int arr[3]={a,b,c};
  sort(arr,arr+3);
  a=arr[0];
  b=arr[1];
  c=arr[2];

}*/

int main() 
{
    while(true){
      int a,b,c;
      int arr[3];
      cin>>arr[0]>>arr[1]>>arr[2];
      sort(arr,arr+3);
      a=arr[0];b=arr[1],c=arr[2];
      if(a==0&&b==0&&c==0){
        return 0;
      }
     
      else if((c*c)==(a*a+b*b)){
        cout<<"right"<<"\n";
      }else cout<<"wrong"<<"\n";
      
    }
    return 0;
}