#include <iostream>
using namespace std;
long long a,b,v;

int main() 
{   cin>>a>>b>>v;
    long long n;
    if((v-a)/(a-b) <1){
      n=(v-a)/(a-b)+2;
    }else n=(v-a)/(a-b)+1;
    cout << ( (v - b - 1) / (a - b) + 1 ) << "\n";

    return 0;
}

