#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int T1, T2, R1, R2;
        cin >> T1 >> T2 >> R1 >> R2;

        long long T1_square = static_cast<long long>(T1) * T1;
        long long T2_square = static_cast<long long>(T2) * T2;
        long long R1_cube = static_cast<long long>(R1) * R1 * R1;
        long long R2_cube = static_cast<long long>(R2) * R2 * R2;

        if (T1_square * R2_cube == T2_square * R1_cube) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
	// your code goes here

}
