#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n;
    vector<int> v;
    v.reserve(n);
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    cin>>m;
    for(int i=0;i<m;i++){
      int x;
      cin>>x;
      cout<<(binary_search(v.begin(),v.end(),x) ?1:0)<<"\n";
    }
    return 0;
}