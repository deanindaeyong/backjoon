#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    int cnt=0;
    for(int i=0;i<n;i++){
      int a,ct=0;
      cin>>a;
      if(a==1){
        continue;
      }
      else{
        for(int j=2;j<a;j++){
          if(a%j==0){
            ct=1;
            break;
          }
        
      }
      if(ct==0){
        cnt++;
      }
      
    }
    }
    cout<<cnt;
    return 0;
}