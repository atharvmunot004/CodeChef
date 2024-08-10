#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M, X;
        cin >> N >> M >> X;
        vector<pair<int, int>> players(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> players[i].first;
            players[i].second = i + 1;
        }
        
        vector<int> qualified;
        for (int i = 0; i < N; ++i) {
            if (players[i].first >= M) {
                qualified.push_back(players[i].second);
            }
        }
        
        if (qualified.size() < X) {
            sort(players.begin(), players.end(), greater<>());
            for (int i = 0; i < N && qualified.size() < X; ++i) {
                if (players[i].first < M) {
                    qualified.push_back(players[i].second);
                }
            }
        }
        
        sort(qualified.begin(), qualified.end());
        
        cout << qualified.size() << " ";
        for (int id : qualified) {
            cout << id << " ";
        }
        cout << endl;
    }
    return 0;
}
