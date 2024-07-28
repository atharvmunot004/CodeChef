#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	int ans[n];
	
	for (int i = 0; i < n; i ++) {
	    int u, v, a, s;
	    cin >> u;
	    cin >> v;
	    cin >> a;
	    cin >> s;
	    
	    if ((v * v) >= ((u * u) - (2 * a * s))) {
	       ans[i] = 1;
	    }
	    else {
	        ans[i] = 0;
	    }
	}

    for (int i = 0; i < n; i ++) {
        if (ans[i]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
