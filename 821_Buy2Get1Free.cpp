#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int groups = n / 3;
        int remaining_items = n % 3;
        int total_cost = (groups * 2 * x) + (remaining_items * x);

        cout << total_cost << endl;
    }

    return 0;

}
