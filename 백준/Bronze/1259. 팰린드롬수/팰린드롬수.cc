#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
   
    while(true){
      string s;
      cin>>s;
      int flag=0;
      if(s=="0"){
        break;
      }
      int len=s.length();
      for(int i=0;i<len;i++){
        if(s[i]!=s[len-i-1]){
          cout<<"no"<<'\n';flag=1; break;
        }
      }
      if(flag==0){
      cout<<"yes"<<'\n';
      }
    }
    
    
    return 0;
}