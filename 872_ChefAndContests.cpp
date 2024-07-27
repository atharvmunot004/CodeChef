#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, P, Q;
        cin >> X >> Y >> P >> Q;
        
        int chefPenalty = X + 10 * P;
        int chefinaPenalty = Y + 10 * Q;

        if (chefPenalty < chefinaPenalty) {
            cout << "Chef" << endl;
        } else if (chefPenalty > chefinaPenalty) {
            cout << "Chefina" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }
    return 0;
	// your code goes here

}
