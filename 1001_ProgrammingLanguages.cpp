#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans[n];
    
    for (int i = 0; i < n; i++) {
        int a, b, a1, b1, a2, b2;
        cin >> a;
        cin >> b;
        cin >> a1;
        cin >> b1;
        cin >> a2; 
        cin >> b2;
        
        if (((a == a1) && (b == b1)) || ((a == b1) && (b == a1))) {
            ans[i] = 1;
        }
        else if (((a == a2) && (b == b2)) || ((a == b2 ) && (b == a2))) {
            ans[i] = 2;
        }
        else {
            ans[i] = 0;
        }
        
        
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
    return 0;
	// your code goes here

}
