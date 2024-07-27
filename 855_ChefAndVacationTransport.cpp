#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        long long planeBus = x + y;
        if (planeBus < z) {
            cout << "PLANEBUS" << endl;
        } else if (planeBus > z) {
            cout << "TRAIN" << endl;
        } else {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
	// your code goes here

}
