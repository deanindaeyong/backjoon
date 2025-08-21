#include <iostream>
#include <list>
using namespace std;
string s;
int m;
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> l;
    
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
      l.push_back(s[i]);
    }
    auto cursor=l.end();
    cin>>m;
    for(int i=0;i<m;i++){
      char op;
      cin>>op;
      if(op=='L'){
        if(cursor!=l.begin()){
          cursor--;
        }
        
      }
      else if(op=='D'){
        if(cursor!=l.end())cursor++;
      }else if(op=='B'){
       if(cursor!=l.begin()){
        
         cursor=l.erase(--cursor);
       }
        
      }else{
        char x;
        cin>>x;
        l.insert(cursor,x);
      }
    }
    for(char c:l){
      cout<<c;
    }
    return 0;
}