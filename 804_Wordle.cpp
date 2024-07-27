#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        string S, T;
        cin >> S >> T;  // Hidden word and guess word

        string M = "";  // Initialize the correctness string

        // Compare each character of the strings S and T
        for (int i = 0; i < 5; ++i) {
            if (S[i] == T[i]) {
                M += 'G';  // Correct guess
            } else {
                M += 'B';  // Incorrect guess
            }
        }

        cout << M << endl;  // Output the correctness string
    }

    return 0;
	// your code goes here

}
