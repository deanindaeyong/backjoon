#include <iostream>
#include <queue>
using namespace std;
int n,k;
queue<int> q;

int visited[100001]={false,};
int dist[100001]={0,};

void bfs(){
  int dx[3]={-1,1,2};
  while(!q.empty()){
    int x=q.front();
    q.pop();
    for(int i=0;i<3;i++){
      int ax=x+dx[i];
      if(i==2){
        ax=x*dx[i];
      }
      if(ax>=0&&ax<=100000&&!visited[ax]){
      visited[ax]=true;
        q.push(ax);
      dist[ax]=dist[x]+1;
        if(ax==k){
        return ;
      }
      }
      
      
    }
    
    
    
  }
}
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    if(n==k){cout<<0; return 0;}
    q.push(n);
    visited[n]=true;
    bfs();
    
    cout<<dist[k];
    
    return 0;
}