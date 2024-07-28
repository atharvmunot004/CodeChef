#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        if (Y == 0) {
            cout << X << endl;
        }
        else {
            if (X == Y) {
                cout << (2 * X) - 1 << endl;
            }
            else {
                cout << X + Y << endl;
            }
        }
    }

    return 0;
	// your code goes here

}
