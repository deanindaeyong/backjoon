#include <iostream>
using namespace std;

int main(){
    int n;
    string a;
    cin>>n;
    cin>>a;
    int len=a.length(),sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]-'0';
    }
    cout<<sum;
    return 0;
}