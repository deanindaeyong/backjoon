#include<vector>
#include<iostream>
#include <queue>
using namespace std;
//up,down,left,right
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};


int solution(vector<vector<int> > maps)
{   int n=maps.size();
    int m=maps[0].size();
    int answer = -1;
 //queue for bfs (current_position n dist)
 queue<pair<int,int>> q;
 q.push({0,0});
 //visit checking
 vector<vector<bool>> visited(n,vector<bool>(m,false));
 visited[0][0]=true;// initial
 while(!q.empty()){
     //current position
     int x=q.front().first;
     int y=q.front().second;
     q.pop();
     
     if(x==n-1 && y==m-1){
         return maps[x][y];
     }
     //up ->down->left->right bfs
     
     for(int i=0;i<4;i++){
         int nx=x+dx[i];
         int ny=y+dy[i];
         
         if(nx>=0 && nx<n &&ny>=0&&ny<m && maps[nx][ny]==1 &&!visited[nx][ny]){
             visited[nx][ny]=true;
             maps[nx][ny]=maps[x][y]+1;
             q.push({nx,ny});
         }
     }
 }
 
    return answer;
}