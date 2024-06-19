#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        if ((b1 + b2 + b3) < 2) {
            ans[i] = 1;
        }
        else {
            ans[i] = 0;
        }
        
    }
    
    for (int i = 0; i < n; i ++) {
        if (ans[i]) {
            cout << "Water filling time" << endl;
        }
        else {
            cout << "Not now" << endl;
        }
    }
	// your code goes here

}
