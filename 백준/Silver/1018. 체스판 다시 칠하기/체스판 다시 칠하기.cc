#include <iostream>
#include <string>

using namespace std;
char arr[51][51]={};
int n,m;
char WB[8][8]={
  'W','B','W','B','W','B','W','B',
  'B','W','B','W','B','W','B','W',
  'W','B','W','B','W','B','W','B',
  'B','W','B','W','B','W','B','W',
  'W','B','W','B','W','B','W','B',
  'B','W','B','W','B','W','B','W',
  'W','B','W','B','W','B','W','B',
  'B','W','B','W','B','W','B','W'
};
char BW[8][8]={
  'B','W','B','W','B','W','B','W',
  'W','B','W','B','W','B','W','B',
  'B','W','B','W','B','W','B','W',
  'W','B','W','B','W','B','W','B',
  'B','W','B','W','B','W','B','W',
  'W','B','W','B','W','B','W','B',
  'B','W','B','W','B','W','B','W',
  'W','B','W','B','W','B','W','B'
};

int cnt_WB(int x,int y){
  int cnt=0;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(arr[x+i][y+j]!=WB[i][j]) cnt++;
      
    }
  }
  return cnt;
}
int cnt_BW(int x,int y){
  int cnt=0;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(arr[x+i][y+j]!=BW[i][j]) cnt++;
      
    }
  }
  return cnt;
}
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
      for(int j=0;j<m;j++){
        arr[i][j]=a[j];
      }
    }
    int minn=64;
    

    for(int r=0;r<=n-8;r++){
      int temp;
      for(int c=0;c<=m-8;c++){
        
        temp=min(cnt_WB(r,c),cnt_BW(r,c));
        minn=min(temp,minn);
      }
    }
    
    cout<<minn;
    return 0;
}