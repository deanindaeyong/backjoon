#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> sorted=priorities;
    sort(sorted.rbegin(),sorted.rend());
    queue<pair<int,int>> q;
    for(int i=0;i<priorities.size();i++){
        q.push({priorities[i],i});
    }
    int cnt=0;
    while(!q.empty()){
        auto [cur,loc]=q.front();
        q.pop();
        if(cur==sorted[cnt]){
            cnt++;
            if(loc==location){
                return cnt;
            }
        }
        q.push({cur,loc});
        
    }
    return cnt;
}