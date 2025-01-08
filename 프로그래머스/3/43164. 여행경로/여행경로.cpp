#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<string, vector<string>> graph;
vector<string> route;
void createGraph(vector<vector<string>>& tickets){
    for(auto& ticket:tickets){
        graph[ticket[0]].push_back(ticket[1]);
    }    
    for(auto& [key,destinations]:graph){
        sort(destinations.begin(),destinations.end());
    }
    
}

bool dfs(string current, int usedTickets, int totalTickets){
    if(usedTickets ==totalTickets){
        route.push_back(current);
        return true;
    }
    auto& destinations=graph[current];
    for(int i=0;i<destinations.size();i++){
        string next=destinations[i];
        destinations.erase(destinations.begin()+i);
        route.push_back(current);
        if(dfs(next,usedTickets+1,totalTickets)){
            return true;
        }
        destinations.insert(destinations.begin()+i,next);
        route.pop_back();
    }
    return false;
}

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    createGraph(tickets);
    int totalTickets=tickets.size();
    dfs("ICN",0,totalTickets);
    return route;
}