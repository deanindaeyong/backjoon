#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Axis{
  public: int x,y;
  
  Axis(int x,int y):x(x),y(y){}
};

bool cmp(const Axis&a, const Axis&b){
  if(a.y!=b.y) return a.y<b.y;
  return a.x<b.x;
}
int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    vector<Axis> v;
    v.reserve(n);
    for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      v.push_back({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
      cout<<v[i].x<<" "<<v[i].y<<'\n';
    }
    return 0;
}