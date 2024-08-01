#include <bits/stdc++.h>
using namespace std;
double calculateAverageAfterRemoval(int N, int K, vector<int>& measurements) {
    sort(measurements.begin(), measurements.end());
    long long total_sum = 0;
    for (int i = K; i < N - K; ++i) {
        total_sum += measurements[i];
    }
    int count_remaining = N - 2 * K;
    double average = static_cast<double>(total_sum) / count_remaining;
    
    return average;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> measurements(N);
        for (int i = 0; i < N; ++i) {
            cin >> measurements[i];
        }
        
        double average = calculateAverageAfterRemoval(N, K, measurements);
        cout << fixed << setprecision(6) << average << "\n";
    }
    
    return 0;
}
