#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int R1, W1, C1;
        int R2, W2, C2;
        cin >> R1 >> W1 >> C1;
        cin >> R2 >> W2 >> C2;
        
        int A_score = 0;
        int B_score = 0;
        
        if (R1 > R2) {
            A_score++;
        } else {
            B_score++;
        }
        
        if (W1 > W2) {
            A_score++;
        } else {
            B_score++;
        }
        
        if (C1 > C2) {
            A_score++;
        } else {
            B_score++;
        }
        if (A_score > B_score) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    
    return 0;
	// your code goes here

}
