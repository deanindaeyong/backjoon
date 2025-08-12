#include <iostream>
using namespace std;
int n,m;
int arr[9];
bool isused[9];
void back(int a){
  if(a==m){
    for(int i=0;i<m;i++) cout<<arr[i]<<" ";
  cout<<"\n";
  return;
  }
  for(int i=1;i<=n;i++){
    if(!isused[i]){
      arr[a]=i;
      isused[i]=1;
      back(a+1);
      isused[i]=0;
    }
}
}
int main() 
{
    cin>>n>>m;
    back(0);
    
    return 0;
}