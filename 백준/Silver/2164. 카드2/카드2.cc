#include <iostream>
#include <deque>
using namespace std;

int main() 
{   deque<int> d;
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
      d.push_back(i);
    }
    int x,y;
    while(!d.empty()){
     
      x=d.front();
      d.pop_front();
      y=d.front();
      d.push_back(y);
      d.pop_front();
      
      
    }
    cout<<x;
    return 0;
}