#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<int> st;
    vector<char> result;
    int next = 1; // 다음에 push할 숫자

    bool possible = true;

    for (int i = 0; i < n; ++i) {
        int target;
        cin >> target;

        // 목표 숫자까지 push
        while (next <= target) {
            st.push(next++);
            result.push_back('+');
        }

        // 스택 top이 target이면 pop
        if (!st.empty() && st.top() == target) {
            st.pop();
            result.push_back('-');
        } else {
            possible = false;
            break;
        }
    }

    if (!possible) {
        cout << "NO\n";
    } else {
        for (char c : result) cout << c << '\n';
    }
}
