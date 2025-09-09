#include <iostream>
using namespace std;
int test_case;
int arr[16][16];
int main() 
{   
  
    cin>>test_case;
  
    
    for(int i=0;i<15;i++){
      for(int j=1;j<15;j++){
        
        if(i==0)arr[i][j]=j;
        else if(j==1){arr[i][j]=1;}
        else {arr[i][j]=arr[i-1][j]+arr[i][j-1];}
      }
    }
  
  
    for(int i=0;i<test_case;i++){
      int k,n;
      cin>>k>>n;
      cout<<arr[k][n]<<"\n";
      
    }
    
    return 0;
}
/*
3 1 5 15
2 1 4 10
1 1 3 6
0 1 2 3*/