#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j ++) {
            int a;
            cin >> a;
            if (a){
                ans[i] = j;
            }
        }
    }
    
    for (int i : ans) {
        cout << i << endl;
    }
    
    return 0;
	// your code goes here

}
