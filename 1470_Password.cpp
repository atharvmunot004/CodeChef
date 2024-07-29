#include <bits/stdc++.h>
using namespace std;

bool isSecurePassword(const string& S) {
    if (S.length() < 10) {
        return false;
    }

    bool hasLower = false;
    bool hasInsideUpper = false;
    bool hasInsideDigit = false;
    bool hasInsideSpecial = false;
    
    string specialChars = "@#%&?";

    for (int i = 0; i < S.length(); ++i) {
        char c = S[i];

        if (islower(c)) {
            hasLower = true;
        }

        if (i > 0 && i < S.length() - 1) {
            if (isupper(c)) {
                hasInsideUpper = true;
            }
            if (isdigit(c)) {
                hasInsideDigit = true;
            }
            if (specialChars.find(c) != string::npos) {
                hasInsideSpecial = true;
            }
        }
    }

    return hasLower && hasInsideUpper && hasInsideDigit && hasInsideSpecial;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;

        if (isSecurePassword(S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
