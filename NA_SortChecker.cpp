#include <bits/stdc++.h>
using namespace std;

void sortChecker(int testCases) {
    while (testCases--) {
        int n;
        cin >> n;

        vector<int> A(n);
        vector<int> B(n);

        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> B[i];
        }
        vector<int> sortedA = A;
        sort(sortedA.begin(), sortedA.end());
        if (sortedA == B) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}

int main() {
    int T;
    cin >> T;
    sortChecker(T);
    return 0;
}
