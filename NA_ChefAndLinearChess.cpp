#include <bits/stdc++.h>
using namespace std;


int findMinMoves(int N, int K, const vector<int>& P) {
    int minMoves = INT_MAX;
    int bestPlayer = -1;

    for (int pi : P) {
        if (K % pi == 0) {
            int moves = (K / pi) - 1;
            if (moves < minMoves) {
                minMoves = moves;
                bestPlayer = pi;
            }
        }
    }

    return bestPlayer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> P(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }

        int result = findMinMoves(N, K, P);
        cout << result << "\n";
    }

    return 0;
}
