#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if ((a + b + c + d) == 0) {
            ans[i] = 1;
        }
        else {
            ans[i] = 0;
        }
    }
    
    for (int i = 0; i < n; i ++) {
        if (ans[i]) {
            cout << "IN" << endl;
        }
        else {
            cout << "OUT" << endl;
        }
    }
	// your code goes here

}
