#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparator function to sort pairs
bool customComparator(const pair<long long, long long>& p1, const pair<long long, long long>& p2) {
    // Sort primarily by the second element in descending order
    if (p1.second != p2.second) {
        return p1.second > p2.second;
    }
    // If second elements are equal, sort by the first element in ascending order
    return p1.first < p2.first;
}

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
    
    // Create pairs of (A[i], B[i])
    vector<pair<long long, long long>> pairs(N);
    for (int i = 0; i < N; ++i) {
        pairs[i] = {A[i], B[i]};
    }
    
    // Sort the pairs with the custom comparator
    sort(pairs.begin(), pairs.end(), customComparator);
    
    // Output the sorted pairs in the required format
    for (const auto& p : pairs) {
        cout << p.first << " " << p.second << " ";
    }
    cout << endl;

    return 0;
}
