#include <iostream>
#include <stack>
using namespace std;

int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    stack<char> st;
    cin>>s;
    int ans=0;
    char prev=0;
    int len=s.length();
    for(int i=0;i<len;i++){
      if(s[i]=='('){
        st.push('(');
      }
      else{
        st.pop();
        if(prev=='('){
          ans+=st.size();
        }else{
          ans+=1;
        } 
      }
      
      prev=s[i];
    }
    cout<<ans;
    return 0;
}