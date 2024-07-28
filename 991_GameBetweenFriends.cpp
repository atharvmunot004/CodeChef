#include <bits/stdc++.h>
using namespace std;
char determine_winner(int A, int B, int C, int D) {
    
    if (B > A) {
        A += C;
    } else {
        B += C;
    }

    if (B > A) {
        A += D;
    } else {
        B += D;
    }

    return (A >= B) ? 'N' : 'S';
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        char result = determine_winner(A, B, C, D);
        cout << result << endl;
    }

    return 0;
}

