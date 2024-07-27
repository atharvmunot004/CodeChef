#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        
        // Determine the direction based on X % 4
        int direction = X % 4;
        if (direction == 0) {
            cout << "North" << endl;
        } else if (direction == 1) {
            cout << "East" << endl;
        } else if (direction == 2) {
            cout << "South" << endl;
        } else if (direction == 3) {
            cout << "West" << endl;
        }
    }
    return 0;
	// your code goes here

}
