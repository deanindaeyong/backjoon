#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int index=0;
    int time=0;
    int cur=0;
    queue<int> bridge;
    for(int i=0;i<bridge_length;i++){
        bridge.push(0);
    }
    while(index<truck_weights.size()||cur>0){
        time++;
        cur-=bridge.front();
        bridge.pop();
        
        if(index<truck_weights.size()&&cur+truck_weights[index]<=weight){
            
            cur+=truck_weights[index];
            bridge.push(truck_weights[index]);
            index++;
        }
        else bridge.push(0);
    }
    return time;
}