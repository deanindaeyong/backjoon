#include <iostream>
using namespace std;
int n,m;
int point[100001];
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    point[0]=0;
    for(int i=1;i<=n;i++){
      int x;
      cin>>x;
      point[i]=point[i-1]+x;
    }
    for(int i=0;i<m;i++){
      int x,y;
        cin>>x>>y;
        cout<<point[y]-point[x-1];
        cout<<"\n";
    }
    return 0;
}