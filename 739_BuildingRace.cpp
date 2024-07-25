#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i ++) {
        float a, b, x, y;
        cin >> a >> b >> x >> y;
        if ((a / x) > (b / y)){
            ans[i] = "Chefina";
        }
        else if ((a / x) == (b / y)) {
            ans[i] = "Both";
        }
        else {
            ans[i] = "Chef";
        }
    }
    
    for (auto& res : ans){
        cout << res << endl;
    }
    
    return 0;
	// your code goes here

}
