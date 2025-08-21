#include <iostream>
using namespace std;

int main() 
{   int arr[26]={0,};
    string s;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
      arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}