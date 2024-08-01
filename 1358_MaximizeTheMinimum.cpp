#include <bits/stdc++.h>
using namespace std;
int maximizeMinimum(vector<int>& A, int N, int K) {
    // Sort the array
    sort(A.begin(), A.end());
    // The maximum minimum value we can achieve is at index min(K, N-1)
    return A[min(K, N - 1)];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << maximizeMinimum(A, N, K) << endl;
    }
    return 0;
}
