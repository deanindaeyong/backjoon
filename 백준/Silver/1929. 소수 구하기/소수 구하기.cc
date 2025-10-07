#include <iostream>
using namespace std;
int arr[1000001]={0,};
int m,n;
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n;
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=n;i++){
      for(int j=2;i*j<=n;j++){
        if(arr[i*j]==1) continue;
        arr[i*j]=1;
      }
    }
  for(int i=m;i<=n;i++){
    if(!arr[i]) cout<<i<<'\n';
  }
    return 0;
}

/*


*/