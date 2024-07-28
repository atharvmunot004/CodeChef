#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    
    while (T--) {
        int N;
        cin >> N;  // Number of elements in the array
        
        vector<int> A(N);
        bool has_zero = false;
        int negative_count = 0;
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] == 0) {
                has_zero = true;
            } else if (A[i] < 0) {
                negative_count++;
            }
        }
        
        // Calculate minimum removals needed
        // If there is at least one zero or the number of negative elements is even, no removal is needed.
        int min_removals = (has_zero || negative_count % 2 == 0) ? 0 : 1;
        
        cout << min_removals << endl;
    }
    
    return 0;
}
