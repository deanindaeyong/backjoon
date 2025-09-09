#include <iostream>
using namespace std;
int n,m,k,r,c;
int sticker[11][11],paper[41][41];

void rotate(){
  int temp[11][11];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      temp[i][j]=sticker[i][j];
    }
  }  
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      sticker[i][j]=temp[r-1-j][i];
    }
  }
  swap(r,c);
}

bool pastable(int a,int b){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(paper[a+i][b+j]==1&&sticker[i][j]==1)
      return false;
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(sticker[i][j]==1){
        paper[a+i][b+j]=sticker[i][j];
      }
    }
  }
  return true;
}


int main() 
{   cin>>n>>m>>k;

    while(k--){
      cin>>r>>c;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          cin>>sticker[i][j];
        }
      }
     
      for(int rot=0;rot<4;rot++){
      bool is_paste =false;
      for(int i=0;i<=n-r;i++){
        if(is_paste) break;
        for(int j=0;j<=m-c;j++){
          if(pastable(i,j)){
            is_paste=true;
            break;
          }
        }
      }
      if(is_paste) break;
      rotate();
      }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cnt+=paper[i][j];
      }
    }
    cout<<cnt;
    return 0;
}