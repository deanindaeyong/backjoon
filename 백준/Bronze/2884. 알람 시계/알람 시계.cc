#include <iostream>
using namespace std;

int main() 
{
    int h,m;
    cin>>h>>m;
   
    if(m<45){
      if(h==0){
        h=23;
        m=m-45+60;
      }else{h=h-1;
      m=m-45+60;}
    }else {m-=45;}
    
    cout<<h<<" "<<m;
    return 0;
}