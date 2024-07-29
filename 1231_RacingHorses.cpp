#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> S(N);
        for (int i = 0; i < N; ++i) {
            cin >> S[i];
        }
        
        sort(S.begin(), S.end());
        
        int minDiff = INT_MAX;
        for (int i = 1; i < N; ++i) {
            int diff = S[i] - S[i - 1];
            minDiff = min(minDiff, diff);
        }
        
        cout << minDiff << endl;
    }
    
    return 0;

}
