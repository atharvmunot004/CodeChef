#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int SA, SB, SC;
        cin >> SA >> SB >> SC;  // Successful submissions for problems A, B, C

        // Determine the hardest problem
        if (SC < SA && SC < SB) {
            cout << "Alice" << endl;  // Problem C is the hardest
        } else if (SB < SA && SB < SC) {
            cout << "Bob" << endl;  // Problem B is the hardest
        } else {
            cout << "Draw" << endl;  // Problem A is the hardest
        }
    }

    return 0;
	// your code goes here

}
