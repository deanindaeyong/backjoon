#include <iostream>
using namespace std;
int n;

int main() 
{
    cin>>n;
    
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        int total_score=0;
        int len=a.length();
        int cnt=0;
        for(int j=0;j<len;j++){
          if(a[j]=='O'){
            cnt++;
          }
          if(a[j]=='X') cnt=0;
          total_score+=1*cnt;
        }
        cout<<total_score<<"\n";
    }
    
    return 0;
}