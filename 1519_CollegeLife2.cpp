#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int S;
        cin >> S;

        vector<int> Q(S);
        for (int i = 0; i < S; ++i) {
            cin >> Q[i];
        }

        long long total_watch_time = 0;

        for (int i = 0; i < S; ++i) {
            int E;
            cin >> E;

            vector<int> L(E);
            for (int j = 0; j < E; ++j) {
                cin >> L[j];
            }

            total_watch_time += L[0];

            for (int j = 1; j < E; ++j) {
                total_watch_time += (L[j] - Q[i]);
            }
        }

        cout << total_watch_time << endl;
    }

    return 0;
	// your code goes here

}
