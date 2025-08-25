#include <iostream>
using namespace std;
int n,r,c;
int func(int a,int x, int y){
  if(a==0){
    return 0;
  }
  int ban=1<<(a-1);
  if(x<ban&&y<ban) return func(a-1,x,y);
  if(x<ban&&y>=ban) return ban*ban+func(a-1,x,y-ban);
  if(x>=ban&&y<ban) return 2*ban*ban+func(a-1,x-ban,y);
  else return 3*ban*ban+func(a-1,x-ban,y-ban);
}
int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>r>>c;
  int k=func(n,r,c);
    cout <<k;
    return 0;
}