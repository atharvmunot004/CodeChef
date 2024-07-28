#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	int ans[T];
	
	for (int i = 0; i < T; i ++) {
	    int N, X;
	    cin >> N;
	    cin >> X;
	    int mov = 0;
	    
	    for (int j = 0; j < N; j ++) {
	        int S, R;
	        
	        cin >> S;
	        cin >> R;
	        
	        if ((S <= X) && (R > mov)) {
	            mov = R;
	        }
	           
	        ans[i] = mov;
	        
	    }
	    
	}
	
	for (int i = 0; i < T; i ++) {
	    cout << ans[i] << endl;
	}

    return 0;

}
