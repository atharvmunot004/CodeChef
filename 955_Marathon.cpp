#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int D, d, A, B, C;
        cin >> D >> d >> A >> B >> C;

        int total_distance = D * d;

        int prize = 0;
        if (total_distance >= 42) {
            prize = C;
        } else if (total_distance >= 21) {
            prize = B;
        } else if (total_distance >= 10) {
            prize = A;
        }

        cout << prize << endl;
    }

    return 0;

}
