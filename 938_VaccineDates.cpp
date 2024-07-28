#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int num;
	cin >> num;
	
	int ans[num];
	
	for (int i = 0; i < num; i ++) {
	    int D, L, R;
	    
	    cin >> D;
	    cin >> L;
	    cin >> R;
	    
	    if (D < L) {
	        ans[i] = 0;
	    }
	    else if (D <= R) {
	        ans[i] = 1;
	    }
	    else {
	        ans[i] = 2;
	    }
	}
	
	for (int i = 0; i < num; i ++) {
	    switch (ans[i]) {
	        case 0:
	        cout << "Too Early" << endl;
	        break;
	        case 1:
	        cout << "Take second dose now" << endl;
	        break;
	        case 2:
	        cout << "Too Late" << endl;
	        break;
	        default:
	        break;
	    
	    }
	}

}
