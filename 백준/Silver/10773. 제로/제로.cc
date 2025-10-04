#include <iostream>
#include <stack>
using namespace std;

int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin>>k;
    stack<int> s;
    for(int i=0;i<k;i++){
      int x;
      cin>>x;
      if(x!=0){
        s.push(x);
      }else s.pop();
    }
    int sum=0;
    while(!s.empty()){
      sum+=s.top();
      s.pop();
    }
    cout<<sum;
    return 0;
}