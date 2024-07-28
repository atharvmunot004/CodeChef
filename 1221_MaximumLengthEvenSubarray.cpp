#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    int sum = (x * (x + 1)) / 2;
    if (sum % 2 == 0) {
        cout << x << endl;
    } else {
        cout << x - 1 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}
