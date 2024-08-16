#include <iostream>
using namespace std;

int main() 
{
    int arr[8];
    int asd[8]={1,2,3,4,5,6,7,8};
    int dsd[8]={8,7,6,5,4,3,2,1};
    
    for(int i=0;i<8;i++){
      cin>>arr[i];
    }
  
    if(equal(arr,arr+8,asd)){
      cout<<"ascending";
    }else if(equal(arr,arr+8,dsd)) cout<<"descending";
    else cout<<"mixed";
    return 0;
}