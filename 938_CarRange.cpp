#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int P, M, V;
        cin >> P >> M >> V;

        // Calculate effective fuel economy
        int effective_economy = M - P + 1;

        // Calculate the maximum distance
        int max_distance = (effective_economy > 0) ? effective_economy * V : 0;

        // Output the result
        cout << max_distance << endl;
    }

    return 0;
	// your code goes here

}
