#include <iostream>
using namespace std;
int n,s;
int arr[21];
bool isused[21];
int cnt=0;
void func(int a, int tot){
  if(a==n){
  if(tot==s){
    
    cnt++;
    
  }
   return; 
  }
    func(a+1,tot);
      func(a+1,tot+arr[a]);

}
int main() 
{   cin>>n>>s;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  func(0,0);
  if(s==0) cnt--;
  cout<<cnt;
    return 0;
}