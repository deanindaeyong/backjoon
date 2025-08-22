#include <iostream>
#include <stack>
using namespace std;

int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    while(true){
      getline(cin,s);
    
      if(s==".") return 0;
      stack<char> st;

      int len=s.length();
      for(int i=0;i<len;i++){
        if(s[i]=='(') st.push('(');
        if(s[i]==')'){
          if(st.empty()||st.top()!='(') {cout<<"no"<<'\n'; break;}
          else st.pop();
        }
        if(s[i]=='[') st.push('[');
        if(s[i]==']'){
          if(st.empty()||st.top()!='[')  {cout<<"no"<<'\n'; break;}
          else st.pop();
      }
      if(s[i]=='.'){
        if(!st.empty()) cout<<"no"<<'\n';
        else cout<<"yes"<<'\n';
        
      }
      }
    }
    return 0;
}