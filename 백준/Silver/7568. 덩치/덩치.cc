#include <iostream>
#include <vector>
using namespace std;
vector<pair<int,int>> v;

int main() 
{   
ios::sync_with_stdio(0);
cin.tie(0);
  int n;
cin>>n;

for(int i=0;i<n;i++){
  int a,b;
  cin>>a>>b;
  v.push_back({a,b});
  
}
int rank[n+1]={0,};

for(int i=0;i<n;i++){
  int cnt=0;
  for(int j=0;j<n;j++){
    if(i==j) continue;
    if(v[j].first>v[i].first&& v[j].second>v[i].second){
      cnt++;
    }
  }
  rank[i]=cnt+1;
}
for(int i=0;i<n;i++){
  cout<<rank[i]<<" ";
}
      return 0;
}