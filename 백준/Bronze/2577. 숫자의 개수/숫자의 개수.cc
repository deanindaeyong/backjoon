#include <iostream>
using namespace std;

int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a*b*c;
    int arr[10]={0,};
    while(x>9){
      arr[x%10]++;
      x/=10;
    }
    arr[x]++;
    for(int i=0;i<10;i++){
      cout<<arr[i]<<"\n";
    }
    
    return 0;
}