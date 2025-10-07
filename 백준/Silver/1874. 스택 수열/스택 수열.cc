#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int n;
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    stack<int> s;
    vector<char> v;
    bool possible=false;
     int cnt=1;
    for(int i=0;i<n;i++){
      int target;
      
      cin>>target;
     
      while(cnt<=target){
        s.push(cnt++);
        v.push_back('+');
        
      }
      if(!s.empty()&&s.top()==target){
        s.pop();
        v.push_back('-');
      }else{
        possible=true;
        break;
      }
      
    }
    int len=v.size();
    for(int i=0;i<len;i++){
      if(possible){
        cout<<"NO";
        return 0;
      }
      else cout<<v[i]<<'\n';
   
    }
    return 0;
}