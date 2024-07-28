#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int ans[n];
	
	for (int i = 0; i < n; i ++) {
	    int H;
	    cin >> H;
	    ans[i] = H /2 + 1;
	}
	
	for (int i = 0; i < n; i ++) {
	    cout << ans[i] <<endl;
	}

}
