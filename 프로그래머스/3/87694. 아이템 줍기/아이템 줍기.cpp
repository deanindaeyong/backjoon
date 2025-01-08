#include <string>
#include <vector>
#include <queue>
using namespace std;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
const int MAX=110;

vector<vector<bool>> isB(MAX,vector<bool>(MAX,false));
vector<vector<bool>> isIN(MAX,vector<bool>(MAX,false));
vector<vector<int>> dist(MAX,vector<int>(MAX,-1));

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    int answer = 0;
    for(auto &rect:rectangle){
        int x1=rect[0]*2,y1=rect[1]*2;
        int x2=rect[2]*2,y2=rect[3]*2;
        for(int x=x1;x<=x2;++x){
            for(int y=y1;y<=y2;++y){
                if(x==x1||x==x2||y==y1||y==y2){
                    isB[x][y]=true;
                }
                else{isB[x][y]=false;isIN[x][y]=true;}
            }
        }
    }
    queue<pair<int,int>> q;
    characterX *=2;characterY *=2;
    itemX *=2;itemY *=2;
    q.push({characterX,characterY});
    dist[characterX][characterY]=0;
    
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        
        for(int i=0;i<4;i++){
            int nx=x+dx[i],ny=y+dy[i];
            if(nx>=0&&nx<MAX&&ny>=0&&ny<MAX&&isB[nx][ny]&&!isIN[nx][ny]&&dist[nx][ny]==-1){
                dist[nx][ny]=dist[x][y]+1;
                if(nx==itemX&&ny==itemY){
                    return dist[nx][ny]/2;
                }
                q.push({nx,ny});
            }
        }
    }
    return answer;
}