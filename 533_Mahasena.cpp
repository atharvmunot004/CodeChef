#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    int e = 0, o = 0;
    
    for (int i = 0; i < n; i ++) {
        int w;
        cin >> w;
        
        if (w % 2) {
            ++ o;
        }
        else {
            ++ e;
        }
    }
    
    if (e > o) {
        cout << "READY FOR BATTLE" << endl;
    }
    else {
        cout << "NOT READY" << endl;
    }
	// your code goes here

}
