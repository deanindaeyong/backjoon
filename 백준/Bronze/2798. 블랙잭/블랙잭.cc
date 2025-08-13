#include <iostream>
using namespace std;
int n,m;
int arr[100];
int main() 
{   int maxx=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
          if(arr[i]+arr[j]+arr[k]<=m){
            maxx=max(maxx,arr[i]+arr[j]+arr[k]);
          }
        }
      }
    }
    cout<<maxx;
    return 0;
}