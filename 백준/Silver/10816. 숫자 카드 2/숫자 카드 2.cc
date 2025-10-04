#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
    }
 
    cin>>m;
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
      int x;
      cin>>x;
      auto cnt=(upper_bound(v.begin(),v.end(),x)-lower_bound(v.begin(),v.end(),x));

      cout<<cnt<<" ";
    }
    return 0;
}