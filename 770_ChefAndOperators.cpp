#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int a, b;
        cin >> a >> b;
        
        if (a < b) {
            ans[i] = "<";
        }
        else if(a == b) {
            ans[i] = "=";
        }
        else {
            ans[i] = ">";
        }
    }
    
    for (auto& i : ans) {
        cout << i << endl;
    }
    
    return 0;
	// your code goes here

}
