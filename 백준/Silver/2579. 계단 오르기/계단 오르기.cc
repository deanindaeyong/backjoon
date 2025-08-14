#include <iostream>
using namespace std;
int point[305];
int n;
int arr[305];

int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int total=0;
    for(int i=1;i<=n;i++){
      cin>>point[i];
      total+=point[i];
    }
    if(n<=2){
      cout<<total;
      return 0;
      
    }
    arr[1]=point[1];
    arr[2]=point[2];
    arr[3]=point[3];
    for(int i=4;i<=n-1;i++){
      arr[i]=min(arr[i-2],arr[i-3])+point[i];
      
    }
    cout<<total-min(arr[n-1],arr[n-2]);
    return 0;
}