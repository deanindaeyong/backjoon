#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string a,b,c;
    cin>>a>>b>>c;
    string x=a,y=b;
    
   cout<<stoi(a)+stoi(b)-stoi(c)<<"\n";
   
   
    cout<<stoi(x+y)-stoi(c);
   
    return 0;
}