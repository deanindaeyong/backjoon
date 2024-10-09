#include <iostream>
using namespace std;

int main() 
{ 
  /*
  int n,s,m,l,xl,xxl,xxxl,t,p;
  cin>>n;
  cin>>s>>m>>l>>xl>>xxl>>xxxl;
  cin>>t>>p;
  int t_sum=0;
  int p_m_sum=0,p_n=0;*/
  int n, arr[6],t,p;
  int t_sum=0;
  int p_m_sum=0,p_n=0;
  
  cin>>n;
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5];
  cin>>t>>p;
  for(int i=0;i<6;i++){
    
    t_sum+=arr[i]/t;
    if(arr[i]%t==0){
      continue;
    }else t_sum++;
  }
  p_m_sum+=n/p;
  p_n+=n%p;
  cout<<t_sum<<"\n";
  cout<<p_m_sum<<" "<<p_n;
  
  
    return 0;
}