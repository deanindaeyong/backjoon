#include <iostream>
using namespace std;
int n;

int main() 
{
  cin>>n;
  int temp=0;
  int cnt=0;
  while(true){
    
    if(to_string(temp).find("666")!=string::npos){
      cnt++;

    }
    if(cnt==n){
      cout<<temp;
      break;
    }
    temp++;
  }
  
  
    return 0;
}

/*
1666
1666
2666
3666
4666
6666
7668

*/