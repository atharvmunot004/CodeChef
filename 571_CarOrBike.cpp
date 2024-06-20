#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int x, y;
        cin >> x >> y;
        
        if (x > y) {
            ans[i] = 0; // car
        }
        else if (y > x) {
            ans[i] = 1; // bike
        }
        else {
            ans[i] = 2; // same
        }
    }
    
    for (int i = 0; i < n; i ++) {
        if (ans[i] == 0) {
            cout << "CAR" << endl;
        }
        else if (ans[i] == 1) {
            cout << "BIKE" << endl;
        }
        else {
            cout << "SAME" << endl;
        }
    }
}
