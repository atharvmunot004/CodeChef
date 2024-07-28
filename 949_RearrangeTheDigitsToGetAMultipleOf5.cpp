#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int D;
        cin >> D;
        string N;
        cin >> N;

        bool canFormMultipleOf5 = false;

        for (char digit : N) {
            if (digit == '0' || digit == '5') {
                canFormMultipleOf5 = true;
                break;
            }
        }

        if (canFormMultipleOf5) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;

}
