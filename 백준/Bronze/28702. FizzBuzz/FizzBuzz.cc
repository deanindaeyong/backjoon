#include <iostream>
using namespace std;

int main() 
{   string a[3];
    for(int i=0;i<3;i++){
      cin>>a[i];
    }
    int n=0;
    for(int i=0;i<3;i++){
      if(isdigit(a[i][0])){
        n=stoi(a[i])+(3-i);
        break;
      }}
      if(n%15==0) cout<<"FizzBuzz";
      else if(n%3==0) cout<<"Fizz";
      else if (n%5==0) cout<<"Buzz";
      else cout<<n;
    
    return 0;
}