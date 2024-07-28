#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int A[10]; // Array to store 10 integers for each test case
        for (int i = 0; i < 10; ++i) {
            cin >> A[i];
        }

        int team1Goals = 0;
        int team2Goals = 0;

        // Calculate goals for Team 1 and Team 2
        for (int i = 0; i < 10; ++i) {
            if (i % 2 == 0) { // 0, 2, 4, 6, 8 are odd-indexed (Team 1)
                team1Goals += A[i];
            } else { // 1, 3, 5, 7, 9 are even-indexed (Team 2)
                team2Goals += A[i];
            }
        }

        // Determine the result
        if (team1Goals > team2Goals) {
            cout << 1 << endl; // Team 1 wins
        } else if (team2Goals > team1Goals) {
            cout << 2 << endl; // Team 2 wins
        } else {
            cout << 0 << endl; // Draw
        }
    }
	// your code goes here

}
