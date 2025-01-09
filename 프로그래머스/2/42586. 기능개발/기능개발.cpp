#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> remaindays;
    for(int i=0;i<progresses.size();i++){
        int days=(100-progresses[i]+speeds[i]-1)/speeds[i] ;
        remaindays.push(days);
    }
    while(!remaindays.empty()){
        int curdays=remaindays.front();
        remaindays.pop();
        int cnt=1;
        while(!remaindays.empty()&&remaindays.front()<=curdays){
            cnt++;
            remaindays.pop();
        }
        answer.push_back(cnt);
    }
    return answer;
 
}
/*
100-progress/speed ==days
*/