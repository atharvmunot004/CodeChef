#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	
	int ans[n];
	
	for (int i = 0; i < n; i ++) {
	    int N, S;
	    cin >> N;
	    cin >> S;
	    if (S == N) {
	        ans[i] = N; // 0 and N
	    }
	    
	    else if (S > N) {
	        ans[i] = 2 * N - S;
	    }
	    else {
	        ans[i] = S;
	    }
	}
	for (int  i = 0; i < n; i++) {
	    cout << ans[i] << endl;
	}

}
