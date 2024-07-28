#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> prices(N);
        for (int i = 0; i < N; ++i) {
            cin >> prices[i];
        }
        
        int totalLoss = 0;
        for (int i = 0; i < N; ++i) {
            if (prices[i] > K) {
                totalLoss += (prices[i] - K);
            }
        }
        
        cout << totalLoss << endl;
    }
    
    return 0;
	// your code goes here

}
