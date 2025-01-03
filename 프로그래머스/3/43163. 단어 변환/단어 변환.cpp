#include <string>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;
bool isoneletterdiff(const string& a, const string& b){
    int difcnt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            difcnt++;
        }
        if(difcnt>1) return false;
    }
    return difcnt==1;
}
int solution(string begin, string target, vector<string> words) {
 
    int answer = 0;
    unordered_set<string> wordset(words.begin(),words.end());
    if(wordset.find(target)==wordset.end()) return 0;
    
    queue<pair<string,int>> q;
    q.push({begin,0});
    
    while(!q.empty()){
        auto [current,steps]=q.front();
        q.pop();
        if(current==target) return steps;
        
        vector<string> toease;
        for(const auto& word : wordset){
            if(isoneletterdiff(current,word)){
                q.push({word,steps+1});
                toease.push_back(word);
            }
        }
        for(const auto& word:toease){
            wordset.erase(word);
        }
    }
    return answer;
}