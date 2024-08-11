#include <iostream>
using namespace std;

int main(){
    int a[9],index=0,max_value=0;
    for(int i=0;i<9;i++){
        cin>>a[i];
        if(a[i]>max_value){
            max_value=a[i];
            index=i+1;
        }
    }
    cout<<max_value<<"\n"<<index;
 
    return 0;
}