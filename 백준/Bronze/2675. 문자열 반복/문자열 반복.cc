#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int a,len;
        string b={};
        cin>>a>>b;
        len=b.length();
        for(int i=0;i<len;i++){
            for(int j=0;j<a;j++){
                cout<<b[i];
            }
        }
        cout<<"\n";
    }
    
    
    return 0;
    
}