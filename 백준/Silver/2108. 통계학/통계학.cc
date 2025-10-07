#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int n;
int arr[8001]={0,};
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int sum=0;
    vector<int> v;
    vector<int> x;
    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      v.push_back(a);
      sum+=a;
      arr[a+4000]++;
    }
    if(round((double)sum/n)==-0) cout<<0<<'\n';
    else
    cout<<round((double)sum/n)<<'\n';
    sort(v.begin(),v.end());
    cout<<v[v.size()/2]<<'\n';
    int max_app=0,max_idx=-1;
    for(int i=0;i<8001;i++){
      if(arr[i]>max_app){
        max_app=arr[i];
        max_idx=i-4000;
      }
    }
    for(int i=0;i<8001;i++){
      if(arr[i]==max_app){
        x.push_back(i-4000);
     
    }
    }
    sort(x.begin(),x.end());
    if(x.size()==1){
      cout<<x[0]<<'\n';
    } else cout<<x[1]<<'\n';
    
    
    cout<<v[v.size()-1]-v[0];
      return 0;
}