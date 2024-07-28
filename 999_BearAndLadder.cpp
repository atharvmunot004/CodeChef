#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    while (Q--) {
        int a, b;
        cin >> a >> b;
        
        if (a > b) {
            swap(a, b);
        }
        
        
        if ((b == a + 1 && a % 2 == 1) || (b == a + 2 && ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1)))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
	// your code goes here

}
