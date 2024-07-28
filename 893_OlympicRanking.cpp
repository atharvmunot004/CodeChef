#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int G1, S1, B1, G2, S2, B2;
        cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;

        int total1 = G1 + S1 + B1;
        int total2 = G2 + S2 + B2;

        if (total1 > total2) {
            cout << "1" << endl;
        } else {
            cout << "2" << endl;
        }
    }
    return 0;

}
