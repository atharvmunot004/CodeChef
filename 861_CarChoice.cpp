#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        float x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        
        float cost1 = y1 / x1;
        float cost2 = y2 / x2;
        
        if (cost1 < cost2) {
            cout << "-1" << endl;
        } else if (cost1 > cost2) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    
    return 0;
	// your code goes here

}
