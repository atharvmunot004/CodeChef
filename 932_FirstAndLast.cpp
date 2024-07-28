#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Initialize the maximum sum as A[N] + A[1]
        int maxSum = A[0] + A[N - 1];

        // Compute maximum sum of adjacent elements
        for (int i = 0; i < N - 1; ++i) {
            int currentSum = A[i] + A[i + 1];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }

        // Output the maximum sum
        cout << maxSum << endl;
    }
    
    return 0;
	// your code goes here

}
