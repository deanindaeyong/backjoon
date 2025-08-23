#include <iostream>
#include <string>
#include <queue>
#include <climits>
using namespace std;
int n,m;
int grid[101][101];
int visited[101][101]={false,};
int step[101][101]={0,};
queue<pair<int,int>> q;
int dx[]={-1,1,0,0,},dy[]={0,0,-1,1};
bool possible(int a, int b){
  if(a<0||b<0||a>=n||b>=m) return false;
  if(visited[a][b]) return false;
  if(grid[a][b]==0) return false;
  return true;
}
void bfs(){
  int cnt=0;
  int minn=INT_MAX;
  while(!q.empty()){
    int x=q.front().first;
    int y=q.front().second;
    q.pop();
    
    for(int i=0;i<4;i++){
      int ax=x+dx[i];
      int ay=y+dy[i];
      if(possible(ax,ay)){
        q.push({ax,ay});
        cnt++;
        visited[ax][ay]=true;
        step[ax][ay]=step[x][y]+1;

      }
      
    }
    
   
  
}

}
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
          grid[i][j]=s[j]-'0';
        }
  
    }
    q.push({0,0});
    visited[0][0]=true;
    step[0][0]=1;
    bfs();
    
    
    cout<<step[n-1][m-1];
    
    
    return 0;
}