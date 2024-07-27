#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	vector<int> ans(t);
	
	for (int i = 0; i < t; i ++) {
	    float a, b, k;
	    cin >> a >> b >> k;
	    
	    ans[i] = ceil ((abs(a - b)) / k);
	}
	
	for (int i : ans) {
	    cout << i << endl;
	}
	
	return 0;

}
