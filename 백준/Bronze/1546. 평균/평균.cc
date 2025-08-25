#include <iostream>
#include <vector>
using namespace std;
int m;
vector<int> v;
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m;
    v.resize(m);
    double maxx=0;
    for(int i=0;i<m;i++){
      cin>>v[i];
      if(maxx<v[i]) maxx=v[i];
      
    }
    double tot=0;
    for(int i=0;i<m;i++){
      tot+=(double)v[i]/maxx*100;
    }
   
    cout<<(double)tot/m;
    
 
    return 0;
}