#include <bits/stdc++.h>
using namespace std;
int maxRectangleArea(vector<int>& sticks) {
    map<int, int> stickCount;
    for (int length : sticks) {
        stickCount[length]++;
    }

    vector<int> pairs;
    for (auto it = stickCount.rbegin(); it != stickCount.rend(); ++it) {
        int length = it->first;
        int count = it->second;

        while (count >= 2) {
            pairs.push_back(length);
            count -= 2;
        }
    }
    if (pairs.size() < 2) {
        return -1;
    }
    sort(pairs.begin(), pairs.end(), greater<int>());
    return pairs[0] * pairs[1];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> sticks(N);
        for (int i = 0; i < N; ++i) {
            cin >> sticks[i];
        }

        int result = maxRectangleArea(sticks);
        cout << result << endl;
    }

    return 0;
}
