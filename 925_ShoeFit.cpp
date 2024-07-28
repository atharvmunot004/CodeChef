#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        
        // Count the number of 1s and 0s
        int sum = A + B + C;
        
        // Check if there is at least one 1 and one 0
        if (sum > 0 && sum < 3) {
            cout << 1 << endl; // Possible to go out
        } else {
            cout << 0 << endl; // Not possible
        }
    }
    
    return 0;
	// your code goes here

}
