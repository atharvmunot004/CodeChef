#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int M, x, y;
        cin >> M >> x >> y;

        vector<int> cops(M);
        for (int i = 0; i < M; ++i) {
            cin >> cops[i];
        }

        int range = x * y;

        set<int> unsafeHouses;

        for (int i = 0; i < M; ++i) {
            int copPosition = cops[i];
            int start = max(1, copPosition - range);
            int end = min(100, copPosition + range);
            
            for (int j = start; j <= end; ++j) {
                unsafeHouses.insert(j);
            }
        }

        int safeHouses = 100 - unsafeHouses.size();
        cout << safeHouses << endl;
    }

    return 0;
	// your code goes here

}
