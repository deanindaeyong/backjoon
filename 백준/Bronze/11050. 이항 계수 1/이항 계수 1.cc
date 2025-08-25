#include <iostream>
#include <algorithm>

using namespace std;
int factorial(int a){
  
  if(a==1){
    return 1;
  }
  
  return factorial(a-1)*a;
}

int arr[10];
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    
    cin>>n>>m;
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=10;i++)
    {
      arr[i]=arr[i-1]*i;
    }
    cout<<arr[n]/(arr[m]*arr[n-m]);
    
    
    return 0;
}