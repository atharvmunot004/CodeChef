#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string X, Y;
        cin >> X >> Y;

        bool canMatch = true;
        
        for (int i = 0; i < X.length(); ++i) {
            if (X[i] != Y[i] && X[i] != '?' && Y[i] != '?') {
                canMatch = false;
                break;
            }
        }

        if (canMatch) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}

