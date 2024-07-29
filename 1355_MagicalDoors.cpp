#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string S;
        cin >> S;
        
        int flips = 0;
        if (S[0] == '0') {
            flips++;
        }
        
        // Count transitions
        for (int i = 1; i < S.length(); ++i) {
            if (S[i] != S[i - 1]) {
                flips++;
            }
        }
        
        cout << flips << endl;
    }
    
    return 0;
	// your code goes here

}
