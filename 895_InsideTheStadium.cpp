#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> runs(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> runs[i];
        }

        int total_runs = 0;
        int strike_rate_100_count = 0;

        for (int i = 0; i < N; ++i) {
            total_runs += runs[i];
            if (total_runs == (i + 1)) {
                strike_rate_100_count++;
            }
        }

        cout << strike_rate_100_count << endl;
    }

    return 0;
	// your code goes here

}
