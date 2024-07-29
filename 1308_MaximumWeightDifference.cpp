#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> weights(N);
        int totalWeight = 0;
        
        for (int i = 0; i < N; ++i) {
            cin >> weights[i];
            totalWeight += weights[i];
        }
        
        sort(weights.begin(), weights.end());
        
        int sumK = 0;
        for (int i = 0; i < K; ++i) {
            sumK += weights[i];
        }
        
        int sumNminusK = 0;
        for (int i = 0; i < N - K; ++i) {
            sumNminusK += weights[i];
        }
        
        int diff1 = abs(totalWeight - 2 * sumK);
        int diff2 = abs(totalWeight - 2 * sumNminusK);
        
        cout << max(diff1, diff2) << endl;
    }
    
    return 0;
}
