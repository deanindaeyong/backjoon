#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max_value=INT_MIN,min_value=INT_MAX;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        max_value=max(a,max_value);
        min_value=min(a,min_value);
    }
    cout<<min_value<<" "<<max_value;
    return 0;
}