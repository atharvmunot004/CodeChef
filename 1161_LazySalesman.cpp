#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, W;
        cin >> N >> W;

        vector<int> earnings(N);
        for (int i = 0; i < N; ++i) {
            cin >> earnings[i];
        }

        sort(earnings.begin(), earnings.end(), greater<int>());

        int current_sum = 0;
        int working_days = 0;

        for (int i = 0; i < N; ++i) {
            current_sum += earnings[i];
            ++working_days;
            if (current_sum >= W) {
                break;
            }
        }

        int holidays = N - working_days;
        cout << holidays << "\n";
    }

    return 0;
}
