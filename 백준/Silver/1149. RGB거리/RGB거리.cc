#include <iostream>
#include <climits>
using namespace std;
int arr[1001][3];
int r[1001],g[1001],b[1001];
int n;

int main() 
{   ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>r[i]>>g[i]>>b[i];
  }
  arr[0][0]=r[0];
  arr[0][1]=g[0];
  arr[0][2]=b[0];
  for(int i=1;i<n;i++){
      arr[i][0]=min(arr[i-1][1],arr[i-1][2])+r[i];            
      arr[i][1]=min(arr[i-1][0],arr[i-1][2])+g[i];
      arr[i][2]=min(arr[i-1][0],arr[i-1][1])+b[i];

  }
  int minn=0;
  minn=min(arr[n-1][0],arr[n-1][1]);
  cout<<min(minn,arr[n-1][2]);
    return 0;
}