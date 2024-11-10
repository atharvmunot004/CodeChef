#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// Function to check if a given X is valid
bool is_valid_X(int X, const vector<int>& arrA, const vector<int>& arrB) {
    set<int> setA(arrA.begin(), arrA.end());  // Use a set for quick look-up
    for (int b : arrB) {
        if (setA.find(b - X) == setA.end()) {  // Check if b - X exists in arrA
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arrA(n);
        vector<int> arrB(n - 1);

        for (int i = 0; i < n; ++i) {
            cin >> arrA[i];
        }
        for (int i = 0; i < n - 1; ++i) {
            cin >> arrB[i];
        }

        // Sort both arrays
        sort(arrA.begin(), arrA.end());
        sort(arrB.begin(), arrB.end());

        // Calculate two possible X values
        int possible_X1 = arrB[0] - arrA[0];
        int possible_X2 = arrB[0] - arrA[1];

        // Find the minimum positive valid X
        vector<int> valid_X;
        if (possible_X1 > 0 && is_valid_X(possible_X1, arrA, arrB)) {
            valid_X.push_back(possible_X1);
        }
        if (possible_X2 > 0 && is_valid_X(possible_X2, arrA, arrB)) {
            valid_X.push_back(possible_X2);
        }

        if (!valid_X.empty()) {
            cout << *min_element(valid_X.begin(), valid_X.end()) << endl;
        }

    }
    return 0;
}
