#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, n, k;
        cin >> m >> n >> k;

        // Calculate total time needed to watch all episodes
        int total_time = n * k;

        // Check if total time is less than time before the exam starts
        if (total_time < m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
	// your code goes here

}
