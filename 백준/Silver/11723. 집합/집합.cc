#include <iostream>
using namespace std;
int m;
int arr[21]={0,};
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m;
    for(int i=0;i<m;i++){
      string s;
      int a;
      cin>>s;
      if(s=="all"){
        for(int i=1;i<=20;i++){
          arr[i]=1;
        }
      }
      else if(s=="empty"){
        for(int i=1;i<=20;i++){
          arr[i]=0;
        }
        
      }else{
        cin>>a;
        if(s=="add"){
        arr[a]=1;
      }
      else if(s=="remove"){
        arr[a]=0;
      }else if(s=="check"){
        if(arr[a]==1){
          cout<<1<<'\n';
        }else cout<<0<<'\n';
      }else {
        if(arr[a]==1) arr[a]=0;
        else arr[a]=1;
      }
        
      }
    }
    return 0;
}