#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	vector<int> ans(t);
	
	for (int i = 0; i < t; i ++) {
	    int x, y, a, b;
	    cin >> x >> y >> a >> b;
	    
	    if ((x != a) && (x != b)) {
	        ans[i] ++;
	    }
	    
	    if ((y != a) && (y != b)) {
	        ans[i] ++;
	    }
	}
	
	for (int i : ans) {
	    cout << i << endl;
	}
	
	return 0;

}
