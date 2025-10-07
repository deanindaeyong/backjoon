#include <iostream>
#include <queue>
using namespace std;

int test_case;

int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>test_case;
    for(int i=0;i<test_case;i++){
      int n,m;
      queue<pair<int,int>> q;
      priority_queue<int> qq;
      cin>>n>>m;
      int max_idx=0;
      for(int j=0;j<n;j++){
        int x;
        cin>>x;
        q.push({x,j});
        qq.push(x);
      }
      int cnt=0;
      while(!q.empty()){
        
        int frt_num=q.front().first;
        int frt_idx=q.front().second;
        q.pop();
        int max_num=qq.top();
        
        if(max_num==frt_num){
          cnt++;
          qq.pop();
          if(m==frt_idx){

          cout<<cnt<<"\n";
          break;
          }
        }
        q.push({frt_num,frt_idx});
      }

    }
    
    return 0;
}




