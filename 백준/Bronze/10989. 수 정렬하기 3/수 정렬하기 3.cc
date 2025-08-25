#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      ++arr[x];
    }
    int x=n;
   for(int i=0;i<10001;i++){
      if(arr[i]>0){
        for(int j=0;j<arr[i];j++){
          cout<<i<<'\n';

        }
      }
    }
    return 0;
}