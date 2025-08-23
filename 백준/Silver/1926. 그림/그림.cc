#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int n,m;
int grid[501][501];
int visited[501][501]={false,};

int size=0;

int dx[]={-1,1,0,0},dy[]={0,0,-1,1};

bool possible(int a, int b){
  if(a<0||b<0||a>=n||b>=m) return false;
  else if(visited[a][b]) return false;
  else return true;
}
int bfs(int a, int b){
  queue<pair<int,int>> q;
  int cnt=0;
 
   if(grid[a][b]==1&&!visited[a][b]){
    cnt++;
    q.push({a,b});
  visited[a][b]=true;
  }
   
  while(!q.empty()){
  int x=q.front().first;
  int y=q.front().second;
  q.pop();
 
  for(int i=0;i<4;i++){
    int ax=x+dx[i];
    int ay=y+dy[i];
    if(possible(ax,ay)&&grid[ax][ay]==1){
      cnt++;
      q.push({ax,ay});
      visited[ax][ay]=true;
     
        
    }
  }
  
}  return cnt;
}

int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int ans=0;
    int counting=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>grid[i][j];
      }
    }
    int maxx=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        int counting2=bfs(i,j);
        maxx=max(counting2,maxx);
        if(counting2>0){
          ans++;
        }
      }
    }
    cout<<ans<<'\n';
    
    cout <<maxx;
    return 0;
}