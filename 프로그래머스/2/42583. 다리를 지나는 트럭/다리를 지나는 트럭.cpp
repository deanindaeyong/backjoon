#include <queue>
#include <vector>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> bridge;       // 다리 위 트럭 상태 (각 칸을 나타냄)
    int current_weight = 0;  // 현재 다리 위 트럭의 총 무게
    int time = 0;            // 경과 시간
    int index = 0;           // 대기 트럭 인덱스

    // 다리 길이만큼 초기화 (빈 칸은 0으로 표시)
    for (int i = 0; i < bridge_length; i++) {
        bridge.push(0);
    }

    while (index < truck_weights.size() || current_weight > 0) {
        time++;

        // 1. 다리에서 트럭 내보내기
        current_weight -= bridge.front();
        bridge.pop();

        // 2. 새로운 트럭 다리에 추가
        if (index < truck_weights.size() && 
            current_weight + truck_weights[index] <= weight) {
            bridge.push(truck_weights[index]);
            current_weight += truck_weights[index];
            index++;
        } else {
            bridge.push(0); // 새 트럭을 추가하지 못하면 빈 칸을 추가
        }
    }

    return time;
}
