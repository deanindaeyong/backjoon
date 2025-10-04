#include <iostream>
#include <algorithm>
#include <deque>
#include <cmath>
using namespace std;
deque<int> v;
int main() 
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
      int n;
    cin>>n;
    if(n==0){cout<<0; return 0;}
    int minn_ppl=round(n*0.15); 
  
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<minn_ppl;i++){
      v.pop_front();
      
    }
    for(int i=0;i<minn_ppl;i++){
      v.pop_back();
    }
    int cnt=0,sum=0;
    while(!v.empty()){
      cnt++;
      sum+=v.front();
      v.pop_front();
    }
    cout<<round((double)sum/cnt);
    return 0;
}