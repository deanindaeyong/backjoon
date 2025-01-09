#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
using namespace std;

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

vector<pair<int,int>> extractPiece(vector<vector<int>>& board,int x, int y, int value){
    vector<pair<int, int>> piece;
    queue<pair<int,int>> q;
    q.push({x,y});
    board[x][y]=-1;
    while(!q.empty()){
        auto [cx,cy]=q.front();
        q.pop();
        piece.push_back({cx,cy});
        for(int i=0;i<4;i++){
            int nx=cx+dx[i],ny=cy+dy[i];
            if(nx>=0&&nx<board.size()&&ny>=0&&ny<board[0].size()&&board[nx][ny]==value){
                board[nx][ny]=-1;
                q.push({nx,ny});
            }
        }
    }
    int minX=piece[0].first, minY=piece[0].second;
    for(auto& [px,py] : piece){
        minX =min(minX,px);
        minY=min(minY,py);
    }
    for(auto& [px,py]: piece){
        px-=minX;
        py-=minY;
    }
    return piece;
}
vector<pair<int,int>> rotatePiece(const vector<pair <int,int>>& piece, int n){
    vector<pair<int,int>> rotated;
    for(auto [x,y] :piece){
        rotated.push_back({y,n-1-x});
    }
    int minX=rotated[0].first, minY=rotated[0].second;
    for(auto& [px,py]:rotated){
        minX=min(minX,px);
        minY=min(minY,py);
    }
    for(auto& [px,py]:rotated){
        px-=minX;
        py-=minY;
    }
    return rotated;
}

bool matchPiece(const vector<pair<int,int>>& a, const vector<pair<int, int>>& b){
    if(a.size()!=b.size()) return false;
    set<pair<int,int>> setA(a.begin(),a.end());
    set<pair<int,int>> setB(b.begin(),b.end());
    return setA==setB;
}

int solution(vector<vector<int>> game_board, vector<vector<int>> table) {
    int n=game_board.size();
    vector<vector<pair<int,int>>> tablePieces,boardHoles;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(table[i][j]==1){
                tablePieces.push_back(extractPiece(table,i,j,1));
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(game_board[i][j]==0){
                boardHoles.push_back(extractPiece(game_board,i,j,0));
            }
        }
    }
    int totalFilled=0;
    vector<bool> used(tablePieces.size(),false);
    for(auto& hole:boardHoles){
        for(int i=0;i<tablePieces.size();i++){
            if(used[i]) continue;
            vector<pair<int,int>> piece=tablePieces[i];
            bool matched=false;
            for(int r=0;r<4;r++){
                if(matchPiece(hole,piece)){
                    totalFilled+=piece.size();
                    used[i]=true;
                    matched=true;
                    break;
                    
                }
                piece=rotatePiece(piece,n);
            }
            if(matched) break;
        }
    }
   
    return totalFilled;
}