#include <iostream>
#include <queue>
#include <climits>
using namespace std;

int m,n;
int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
int grid[1001][1001];
int visited[1001][1001]={false,};
int rotten[1001][1001];
queue<pair<int,int>> q;
int minn=INT_MAX;
bool possible(int a,int b){
  if(a<0||b<0||a>=m||b>=n) return false;
  if(grid[a][b]==-1) return false;
  if(grid[a][b]==1) return false;
  if(visited[a][b]) return false;
  return true;
}
int check(){
  int maxx=0;
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(grid[i][j]==-1) continue;
        if(grid[i][j]==0&& rotten[i][j]==0) return -1;
        
        maxx=max(maxx,rotten[i][j]);
        
      }
   }
   return maxx;
}

int continue2(){
 
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(grid[i][j]==0) return 0;
      }
   }
   return 1;
}

void bfs(){
  
  while(!q.empty()){
    
    int x=q.front().first;
    int y=q.front().second;
    
    q.pop();
    for(int i=0;i<4;i++){
      int ax=x+dx[i];
      int ay=y+dy[i];
      if(possible(ax,ay)){
        q.push({ax,ay});
        visited[ax][ay]=true;
        rotten[ax][ay]=1+rotten[x][y];
        
      }
    }
  
  
  } 
  
}
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cin>>grid[i][j];
        
        if(grid[i][j]==1){
          rotten[i][j]=1;
          q.push({i,j});
          visited[i][j]=true;
        }
      }
    }
    if(continue2()==1){
      cout <<0;
      return 0;
    }
    bfs();
    if(check()==-1){
      cout<<-1;
    }else cout<<check()-1;
    
    
 
    return 0;
}