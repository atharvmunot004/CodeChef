#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        int k;
        cin >> k;
        
        int cycles = k / 2;
        int remaining_seconds = k % 2;
        
        int position = 2 * cycles;
        if (remaining_seconds == 1) {
            position += 3;
        }
        
        cout << position << '\n';
    }

    return 0;
	// your code goes here

}
