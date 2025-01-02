#include <string>
#include <vector>

using namespace std;
void dfs(int curr_comp,vector<vector<int>>& comp, vector<bool>& visited){
    visited[curr_comp]=true;
    for(int i=0;i<comp.size();++i){
        if(!visited[i]&& comp[curr_comp][i]==1){
            dfs(i,comp,visited);
        }
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> visited(n,false);
    for(int i=0;i<n;++i){
        if(!visited[i]){
            dfs(i,computers,visited);
            answer++;
        }
    }
    return answer;
}