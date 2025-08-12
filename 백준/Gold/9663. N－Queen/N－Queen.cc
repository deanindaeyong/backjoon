#include <iostream>
using namespace std;
bool isused1[225],isused2[225],isused3[225];
int n;
int cnt=0;
void func(int a){
  if(a==n){
    cnt++;
    return;
  }
  
  for(int i=0;i<n;i++){
    if(isused1[i]||isused2[a+i]||isused3[a-i+n-1]) continue;
    isused1[i]=1;
    isused2[a+i]=1;
    isused3[a-i+n-1]=1;
    func(a+1);
    isused1[i]=0;
    isused2[a+i]=0;
    isused3[a-i+n-1]=0;
    
    
  }
}
int main() 
{
  cin>>n;
  
  func(0);
  cout<<cnt;
    return 0;
}