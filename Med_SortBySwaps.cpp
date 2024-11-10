#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // To store the swap operations
    vector<pair<int, int>> swaps;

    // Selection sort-like approach to sort the array and record swaps
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        
        // Find the smallest element in the remaining unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min_index]) {
                min_index = j;
            }
        }
        
        // If the minimum element is not already in the current position, swap it
        if (min_index != i) {
            swaps.push_back({i, min_index});
            swap(A[i], A[min_index]);
        }
        
        // Stop if we've reached the maximum allowed swaps
        if (swaps.size() >= n - 1) {
            break;
        }
    }

    // Output the result
    cout << swaps.size() << endl;
    for (const auto& p : swaps) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
