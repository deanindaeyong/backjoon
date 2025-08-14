#include <iostream>
using namespace std;
int n,test_case;
int arr[11];
int main() 
{ 
  cin>>test_case;
  arr[1]=1;
  arr[2]=2;
  arr[3]=4;
  for(int i=0;i<test_case;i++){
    cin>>n;
      for(int i=4;i<=n;i++){
      arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
     }
     cout<<arr[n];
     cout<<"\n";
    
  }
  
    return 0;
}