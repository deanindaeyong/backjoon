#include <iostream>
#include <set>
using namespace std;
struct comp{
  bool operator() (const string& a, const string& b)const{
    if(a.size()!=b.size()) return a.size()<b.size();
    return a<b;
  }
  
};

int main() 
{   set<string,comp> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      string a;
      cin>>a;
      s.insert(a);
    }
    for(auto& b:s) cout<<b<<"\n";
    return 0;
}