#include <iostream>
#include <queue>
#include <climits>
#include <cstring>
using namespace std;

int r,c;

int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
queue<pair<int,int>> qj;
queue<pair<int,int>> qf;
int visitedf[1001][1001]={false,};
int visitedj[1001][1001]={false,};
char grid[1001][1001];
int distj[1001][1001],distf[1001][1001];
bool possiblej(int a, int b){
  if(grid[a][b]=='#') return false;
  if(grid[a][b]=='F') return false;
  if(a<0||b<0||a>=r||b>=c) return false;
  if(visitedj[a][b]) return false;
  return true;
}

bool possiblef(int a, int b){
  if(grid[a][b]=='#') return false;
  if(grid[a][b]=='F') return false;
  if(a<0||b<0||a>=r||b>=c) return false;
  if(visitedf[a][b]) return false;
  return true;
}

void bfsj(){
 while(!qj.empty()){
   int x=qj.front().first;
   int y=qj.front().second;
   qj.pop();
   for(int i=0;i<4;i++){
     int ax=x+dx[i];
     int ay=y+dy[i];
     if(possiblej(ax,ay)){
       if(distf[ax][ay]==-1||distf[ax][ay]>distj[x][y]+1){
         
         qj.push({ax,ay});
         visitedj[ax][ay]=true;
         distj[ax][ay]=distj[x][y]+1;
         if(ax==0||ax==r-1||ay==0||ay==c-1){
           cout<<distj[ax][ay]+1;
          return ; 
         }
       }
     }
     
   }
  
}
cout<<"IMPOSSIBLE";
}
void bfsf(){
 while(!qf.empty()){
   int x=qf.front().first;
   int y=qf.front().second;
   qf.pop();
   for(int i=0;i<4;i++){
     int ax=x+dx[i];
     int ay=y+dy[i];
     if(possiblef(ax,ay)){
       qf.push({ax,ay});
       visitedf[ax][ay]=true;
       distf[ax][ay]=distf[x][y]+1;
     }
     
   }
  
}
}
int main() 
{   cin>>r>>c;
    memset(distf,-1,sizeof distf);
    memset(distj,-1,sizeof distj);
    for(int i=0;i<r;i++){
      string s;
      cin>>s;
      for(int j=0;j<c;j++){
        grid[i][j]=s[j];
        if(grid[i][j]=='F'){
          distf[i][j]=0;
          visitedf[i][j]=true;
          qf.push({i,j});
        }
        if(grid[i][j]=='J'){
          distj[i][j]=0;
          visitedj[i][j]=true;
          qj.push({i,j});
          if(i==0||i==r-1||j==0||j==c-1){
            cout<<1;
            return 0;
          }  
        
        }
      }
    }
    
    bfsf();
    bfsj();
  /*  int minn=INT_MAX;
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        if(distj[i][j]>0&&(i==0||i==r-1||j==0||j==c-1))
        minn=min(minn,distj[i][j]);
      }
  }
  if(minn==0){cout<<"IMPOSSIBLE";}
  else cout<<minn+1;
 */
 /* 
  cout<<endl;
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<distj[i][j]<<" ";
      
    }
    cout<<endl;
  }
  
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<distf[i][j]<<" ";
      
    }
    cout<<endl;
  }*/
    return 0;
}