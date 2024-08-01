#include <bits/stdc++.h>
using namespace std;

int maxPairs(vector<int>& sticks, int N, int D) {
    sort(sticks.begin(), sticks.end());

    int pairs = 0;
    int i = 0;

    while (i < N - 1) {
        if (sticks[i + 1] - sticks[i] <= D) {
            pairs++;
            i += 2;
        } else {
            i++;
        }
    }

    return pairs;
}

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> sticks(N);
    for (int i = 0; i < N; ++i) {
        cin >> sticks[i];
    }

    int result = maxPairs(sticks, N, D);
    cout << result << endl;

    return 0;
}
