#include <iostream>
using namespace std;
int n;

void func(int x,int y,int k){
  if(k==1){
      cout<<x<<" "<<y<<'\n';

     return;
  }
  func(x,6-x-y,k-1);
        cout<<x<<" "<<y<<'\n';

  func(6-x-y,y,k-1);
 
}
int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cout<<(1<<n)-1<<"\n";
    func(1,3,n);
    
    return 0;
}