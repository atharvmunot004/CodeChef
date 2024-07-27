#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        bool found = false;

        for (int y = 0; y <= N / 7; ++y) {
            int remainder = N - 7 * y;
            if (remainder % 2 == 0) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;

	// your code goes here

}
