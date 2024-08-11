#include <iostream>
#include <algorithm>
using namespace std;
int find(char a){
    if(a=='a')return 0;
    else if(a=='b')return 1;
    else if(a=='c')return 2;
    else if(a=='d')return 3;
    else if(a=='e')return 4;
    else if(a=='f')return 5;
    else if(a=='g')return 6;
    else if(a=='h')return 7;
    else if(a=='i')return 8;
    else if(a=='j')return 9;
    else if(a=='k')return 10;
    else if(a=='l')return 11;
    else if(a=='m')return 12;
    else if(a=='n')return 13;
    else if(a=='o')return 14;
    else if(a=='p')return 15;
    else if(a=='q')return 16;
    else if(a=='r')return 17;
    else if(a=='s')return 18;
    else if(a=='t')return 19;
    else if(a=='u')return 20;
    else if(a=='v')return 21;
    else if(a=='w')return 22;
    else if(a=='x')return 23;
    else if(a=='y')return 24;
    else return 25;
    
}
int main() 
{    int arr[26];
     fill(arr,arr+26,-1);
     string a;
     cin>>a;
     int len=a.length();
     for(int i=0;i<len;i++){
         if(arr[find(a[i])]!=-1) continue;
         else arr[find(a[i])]=i;
     }
  for(int i=0;i<26;i++){
         cout<<arr[i]<<" ";
     }
    return 0;
}