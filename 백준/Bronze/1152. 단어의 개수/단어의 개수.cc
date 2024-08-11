#include <iostream>
using namespace std;

int main() 
{   string a;
    
    getline(cin,a);
    int len=a.length();
    int cnt=0;
    bool word=false;
    for(int i=0;i<len;i++){
      if(a[i]!=' '){
        if(!word){
          cnt++;
          word=true;
          
        }
      }else word=false;
    }
    cout<<cnt;
    
    return 0;
}