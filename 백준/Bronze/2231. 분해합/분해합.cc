#include <iostream>
using namespace std;

int n;
int x=0;
int main() 
{   cin>>n;
  for(int i=1;i<=1000000;i++){
    int sum=0;
    sum+=i;
    int j=i;
    while(j>0){
      sum+=j%10;
      j=j/10;
    }
    if(sum==n){
      x=i;
      break;
    }
  }
  cout<<x;
    return 0;
}