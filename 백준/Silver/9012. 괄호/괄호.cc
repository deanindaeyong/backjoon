#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin>>n;
    
    for(int i=0;i<n;i++){
      stack<char> s;
      string a;
      cin>>a;
      int len=a.length();
      bool empty=false;
      for(int j=0;j<len;j++){
        
        if(a[j]=='(') s.push('(');
        else if(!s.empty()) s.pop();
        else { empty=true;
        }
      }
      if(empty==true||!s.empty()) cout<<"NO"<<'\n';
      else cout<<"YES"<<'\n';
      
      
    }
    
    return 0;
}