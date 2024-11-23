#include <vector>
using namespace std;

int solution(vector<int> nums)
{   int arr[200001]={0,};
    for(int i=0;i<nums.size();i++){
        arr[nums[i]]++;
    }
 int answer=0;
 int cnt=0;
 for(int i=0;i<200001;i++){
     if(arr[i]>=1){
         cnt++;
     }
 }
 if(cnt>(nums.size()/2)){
     answer=nums.size()/2;
 }
    else answer=cnt;
  
    return answer;
}