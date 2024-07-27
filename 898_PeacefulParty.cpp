#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int PA, PB, PC;
        cin >> PA >> PB >> PC;

        // Calculate the two possible maximums
        int max_invite = max(PA + PC, PB);
        
        cout << max_invite << endl;
    }

    return 0;
	// your code goes here

}
