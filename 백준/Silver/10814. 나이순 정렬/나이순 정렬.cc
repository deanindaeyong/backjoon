#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class Student{
  public:
    int age,idx;
    string name;
    
  Student(int age,int idx,string name){
    this->age=age;
    this->idx=idx;
    this->name=name;
  }
  
};
bool cmp(Student a, Student b){
  if(a.age!=b.age) return a.age<b.age;
  else return a.idx<b.idx;
}
int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin>>n;
  vector<Student> s;
  for(int i=0;i<n;i++){
    int a; string c;
    cin>>a>>c;
    s.push_back({a,i,c});
    
  }
  sort(s.begin(),s.end(),cmp);
  for(int i=0;i<n;i++){
    cout<<s[i].age<<" "<<s[i].name<<"\n";
  }

    return 0;
}