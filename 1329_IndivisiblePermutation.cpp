#include <bits/stdc++.h>
using namespace std;

void createIndivisiblePermutation(int n) {
    vector<int> permutation(n);
    for (int i = 1; i <= n; i++) {
        permutation[i-1] = i;
    }
    
    // Swap adjacent elements to ensure indivisibility
    for (int i = n - 1; i > 0; i -= 2) {
        swap(permutation[i], permutation[i - 1]);
    }
    
    // Print the permutation
    for (int i = 0; i < n; i++) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        createIndivisiblePermutation(N);
    }
    return 0;
}
