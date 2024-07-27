#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        // Find the maximum score
        int max_score = max(x, y);
        
        // Calculate the minimum odd number N
        int n = 2 * max_score - 1;
        
        // Output the result
        cout << n << endl;
    }

    return 0;

}
