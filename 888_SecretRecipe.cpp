#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        cin.ignore();
        float X1, X2, X3, V1, V2;
        cin >> X1 >> X2 >> X3 >> V1 >> V2;

        // Calculate distances
        float distanceChef = abs(X3 - X1);
        float distanceKefa = abs(X2 - X3);

        // Compare times using cross-multiplication to avoid floating-point division
        if (distanceChef / V1 < distanceKefa / V2) {
            cout << "Chef\n";
        } else if (distanceChef / V1 > distanceKefa / V2) {
            cout << "Kefa\n";
        } else {
            cout << "Draw\n";
        }
    }
    return 0;

}
