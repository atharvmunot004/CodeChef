#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int Z, Y, A, B, C;
        cin >> Z >> Y >> A >> B >> C;
        
        int remainingMoney = Z - Y;
        int totalCost = A + B + C;
        
        if (remainingMoney >= totalCost) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
	// your code goes here

}
