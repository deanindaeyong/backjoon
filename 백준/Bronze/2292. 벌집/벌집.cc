#include <iostream>
using namespace std;
int n;
int main() 
{   cin>>n;
   int i=1;
   while(3*i*i-3*i+1<n){
     i++;
   }
    cout<<i;
    
    return 0;
}