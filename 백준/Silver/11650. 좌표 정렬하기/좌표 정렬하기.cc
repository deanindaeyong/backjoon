#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Axis{
  public:
  int x,y;
  Axis(int x,int y):x(x),y(y){
    
  }
  
};
vector<Axis> v;
bool cmp(const Axis& a, const Axis& b){
  if(a.x!=b.x) return a.x<b.x;
  return a.y<b.y;
}
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      v.push_back({x,y});
      
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
      cout<<v[i].x<<" "<<v[i].y<<'\n';
    }
    
    return 0;
}