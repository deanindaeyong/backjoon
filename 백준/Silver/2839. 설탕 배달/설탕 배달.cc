#include <iostream>
using namespace std;

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  int x[5001]={0,};
  
  x[3]=1;
 
  x[5]=1;
  
  for(int i=6;i<=n;i++){
   if(x[i-3])x[i]=x[i-3]+1;
   if(x[i-5])x[i]=x[i]?min(x[i-5]+1,x[i]):x[i-5]+1;
   
    
  }
    cout << (x[n]=x[n]?x[n]:-1);
    return 0;
}

/*
 1
 2
 3
 4
 5
 6
 7
 8
 
 */