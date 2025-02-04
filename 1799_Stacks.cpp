#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    multiset<int> stacks;

    for (int radius : A) {
        auto it = stacks.upper_bound(radius);
        if (it != stacks.end()) {
            stacks.erase(it);  // Replace the top element
        }
        stacks.insert(radius);  // Add the new top element
    }

    cout << stacks.size() << " ";
    for (int x : stacks) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
