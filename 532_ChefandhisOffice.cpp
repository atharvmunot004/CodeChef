#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i= 0; i < n; i ++) {
        int x, y;
        cin >> x >> y;
        ans[i] = (x * 4) + y;
    }
    
    for (int i =0; i < n; i ++) {
        cout << ans[i] << endl;
    }
	// your code goes here

}
