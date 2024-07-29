#include <bits/stdc++.h>
using namespace std;

vector<int> evaluateCandidates(int N, int M, int X, int Y, const vector<string>& candidates) {
    vector<int> result(N, 0); 

    for (int i = 0; i < N; ++i) {
        int fullSolves = 0;
        int partialSolves = 0;

        for (char ch : candidates[i]) {
            if (ch == 'F') fullSolves++;
            if (ch == 'P') partialSolves++;
        }

        // Determine if the candidate passes
        if (fullSolves >= X || (fullSolves >= X - 1 && partialSolves >= Y)) {
            result[i] = 1;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N, M, X, Y;
        cin >> N >> M >> X >> Y;

        vector<string> candidates(N);
        for (int i = 0; i < N; ++i) {
            cin >> candidates[i];
        }

        vector<int> result = evaluateCandidates(N, M, X, Y, candidates);

        for (int res : result) {
            cout << res;
        }
        cout << endl;
    }

    return 0;
}
