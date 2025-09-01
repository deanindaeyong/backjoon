#include <iostream>
#include <vector>
using namespace std;
int n,m;
int grid1[9][9],grid2[9][9];
int empt=0;
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

vector<pair<int,int>> cctv;
bool possible(int a, int b){
  if(a<0||b<0||a>=n||b>=m) return false;
  return true;
  
}
void dfs(int a, int b,int dir){
  dir%=4;
  while(1){
    a+=dx[dir];
    b+=dy[dir];
    if(!possible(a,b)||grid2[a][b]==6) return;
    if(grid2[a][b]!=0)continue;
    grid2[a][b]=7;
  }
}

void func(){
  for(int temp =0;temp<1<<(2*cctv.size());temp++){
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      grid2[i][j]=grid1[i][j];
  int brute=temp;
  for(int i=0;i<cctv.size();i++){
    int dir=brute%4;
    brute/=4;
    int x=cctv[i].first;
    int y=cctv[i].second;
    if(grid1[x][y]==1){
      dfs(x,y,dir);
    }
    else if(grid1[x][y]==2){
      dfs(x,y,dir);
      dfs(x,y,dir+2);
      
    }else if(grid1[x][y]==3){
      dfs(x,y,dir);
      dfs(x,y,dir+1);
    }else if(grid1[x][y]==4){
      dfs(x,y,dir);
      dfs(x,y,dir+1);
      dfs(x,y,dir+2);
      
    }else{
      dfs(x,y,dir);
      dfs(x,y,dir+1);
      dfs(x,y,dir+2);
      dfs(x,y,dir+3);
    }
  }
    int val=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        val+=(grid2[i][j]==0);
      }
    }
  empt=min(empt,val);
    
  }
  
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>grid1[i][j];
        if(grid1[i][j]!=0 &&grid1[i][j]!=6)
        cctv.push_back({i,j});
        if(grid1[i][j]==0) empt++;
      }
    }
    func();
    cout<<empt;
    return 0;
}