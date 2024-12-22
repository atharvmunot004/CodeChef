#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Input size of the array
    int n = 0;
    cin >> n;

    // Input array elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> swaps; // To store the indices of swaps
    int count = 0; // Number of swaps

    // Perform Bubble Sort to track adjacent swaps
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                swap(arr[j], arr[j + 1]);
                swaps.push_back(j); // Record the index of the swap
                swapped = true;
                ++count;
            }
        }
        if (!swapped) {
            break;
        }
    }

    // Output the total number of swaps
    cout << count << "\n";

    // Output the indices of the swaps
    for (int index : swaps) {
        cout << index << " ";
    }
    cout << "\n";

    return 0;
}
