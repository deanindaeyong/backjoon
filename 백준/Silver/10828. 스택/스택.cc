#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() 
{ ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    stack<int> st;
    cin>>n;
    for(int i=0;i<n;i++){

      string s;
      cin>>s;
      int len=s.length();
      if(s=="top"){
        if(st.empty()){
          cout<<-1<<"\n";
        }else cout<<st.top()<<"\n";
      }
      else if(s=="pop"){
        if(st.empty()){
          cout<<-1<<"\n";
        }
        else{
           cout<<st.top()<<"\n";
          st.pop();
        }
       
      }else if(s=="size"){
        cout<<st.size()<<"\n";
      }else if(s=="empty"){
        cout<<st.empty()<<"\n";
      }else if(s=="push"){
        int a;
        cin>>a;
        st.push(a);
      }
    }
    return 0;
}