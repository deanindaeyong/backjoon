#include <iostream>
using namespace std;
int n;
int arr[301][301];
int point[301];
int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  
  for(int i=1;i<=n;i++){
    cin>>point[i];
  }
  arr[0][1]=0;
  arr[0][2]=0;
  arr[1][1]=point[1];
  arr[1][2]=point[1];
  arr[2][1]=point[2];
  arr[2][2]=point[1]+point[2];
  for(int i=3;i<=n;i++){
    arr[i][1]=max(arr[i-2][2],arr[i-2][1])+point[i];
    arr[i][2]=arr[i-1][1]+point[i];
    
  }
  cout<<max(arr[n][1],arr[n][2]);
  
  
    return 0;
}