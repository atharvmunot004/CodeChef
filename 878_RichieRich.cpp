#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int num;
	cin >> num;
	
	int ans[num];
	
	for (int i = 0; i < num; i ++) {
	    int A, B, X;
	    cin >> A;
	    cin >> B;
	    cin >> X;
	    
	    ans[i] = (B- A) / X;
	}
	
	for (int i = 0; i < num; i ++) {
	    cout << ans[i] << endl;
	}

}
