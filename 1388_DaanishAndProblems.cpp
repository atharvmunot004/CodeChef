#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        vector<int> A(11);
        for (int i = 1; i <= 10; ++i) {
            cin >> A[i];
        }
        int K;
        cin >> K;

        int mostDifficultRemaining = 10;

        for (int i = 10; i >= 1; --i) {
            if (K >= A[i]) {
                K -= A[i];
                A[i] = 0;
            } else {
                A[i] -= K;
                K = 0;
                break;
            }
        }

        for (int i = 10; i >= 1; --i) {
            if (A[i] > 0) {
                mostDifficultRemaining = i;
                break;
            }
        }

        cout << mostDifficultRemaining << endl;
    }
    return 0;
	// your code goes here

}
