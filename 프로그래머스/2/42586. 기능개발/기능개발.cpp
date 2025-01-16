#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    for(int i=0;i<progresses.size();i++){
        int rem=(100-progresses[i]+speeds[i]-1)/speeds[i];
        q.push(rem);
    }
    int cnt=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        cnt=1;
        while(!q.empty()&&q.front()<=cur){
            cnt++;
            q.pop();
        }
        answer.push_back(cnt);
    }
    return answer;
}