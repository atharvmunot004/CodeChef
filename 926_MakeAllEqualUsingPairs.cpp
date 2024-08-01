#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int, int> freq;

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            freq[A[i]]++;
        }

        int max_frequency = 0;
        for (const auto& p : freq) {
            if (p.second > max_frequency) {
                max_frequency = p.second;
            }
        }

        int result = N - max_frequency;
        cout << result << "\n";
    }

    return 0;
}
