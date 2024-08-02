#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        
        bool ans = true;
        
        if (p % a) {
            ans = false;
        }
        if (q % b) {
            ans = false;
        }
        
        if (abs((p/a) - (q/b)) > 1) {
            ans = false;
        }
        
        if (ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
	// your code goes here

}
