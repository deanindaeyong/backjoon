#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int w,h,n;
      cin>>h>>w>>n;
      int room=001;
      int cnt=0;
      for(int j=0;j<n;j++){
        if(j%h==0) {room=001+cnt;cnt++;}
        room+=100;
        
      }
      cout<<room<<"\n";
    }
    return 0;
}