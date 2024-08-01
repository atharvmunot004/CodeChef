#include <bits/stdc++.h>
using namespace std;

int matchesNeeded(int digit) {
    vector<int> matches = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    return matches[digit];
}

int calculateMatches(int A, int B) {
    int total = A + B;
    int matchCount = 0;
    while (total > 0) {
        int digit = total % 10;
        matchCount += matchesNeeded(digit);
        total /= 10;
    }
    
    return matchCount;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;
        cout << calculateMatches(A, B) << "\n";
    }

    return 0;
}
