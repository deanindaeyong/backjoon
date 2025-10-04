#include <iostream>
#include <queue>
using namespace std;

int main() 
{   int n,k;
    cin>>n>>k;
    queue<int> q;
    for(int i=1;i<=n;i++){
      q.push(i);
    }
    int cnt=0;
    cout<<"<";
    while(!q.empty()){
      
      for(int i=0;i<k-1;i++){
        int x=q.front();
        q.pop();
        q.push(x);
      }
      cout<<q.front();
      q.pop();
      if(!q.empty()) cout<<", ";
      
      
    }
    cout<<">";
    return 0;
}
