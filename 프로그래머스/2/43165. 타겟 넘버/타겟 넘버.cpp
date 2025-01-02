#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    stack<pair<int,int>> s;//sum n index
    s.push({0,0});
    while(!s.empty()){
        auto [cur_sum,index]=s.top();
        s.pop();
        if(index==numbers.size()){
            if(cur_sum==target){
                answer++;
            }
        }else{
            s.push({cur_sum+numbers[index],index+1});
            s.push({cur_sum-numbers[index],index+1});
        }
    }
    return answer;
}