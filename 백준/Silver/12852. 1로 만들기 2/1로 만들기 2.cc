#include <iostream>
using namespace std;
int n;
int arr[1000001];
int way[1000001];
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    arr[1]=0;
    arr[2]=1;
    arr[3]=1;
    way[1]=1;
    way[2]=1;
    way[3]=1;
    for(int i=4;i<=n;i++){
      arr[i]=arr[i-1]+1;
      way[i]=i-1;
      if(i%3==0&&arr[i]>arr[i/3]+1){
        arr[i]=arr[i/3]+1;
        way[i]=i/3;
      }
      if(i%2==0&&arr[i]>arr[i/2]+1){
        arr[i]=arr[i/2]+1;
        way[i]=i/2;
      }
    }
    cout<<arr[n]<<"\n";
    cout<<n<<" ";
    int p=n;
    while(p!=1){
     
        cout<<way[p]<<" ";
        p=way[p];
        
    }
    
    return 0;
}