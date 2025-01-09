#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(),0);
    stack<int> s;
    for(int i=0;i<prices.size();i++){
        while(!s.empty()&&prices[s.top()]>prices[i]){
            int top=s.top();
            s.pop();
            answer[top]=i-top;
        }
        s.push(i);
    }
    while(!s.empty()){
        int top=s.top();
        s.pop();
        answer[top]=prices.size()-1-top;
    }
    return answer;
}