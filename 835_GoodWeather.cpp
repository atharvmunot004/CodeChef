#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    vector<string> ans(t);
    
    
    for (int i = 0; i < t; i ++) {
        int sun = 0;
        for (int j = 0; j < 7; j ++){
            int day;
            cin >> day;
            if (day){
                ++sun;
            }
        }
        
        if (sun > 3) {
            ans[i] = "YES";
        }
        else {
            ans[i] = "NO";
        }
    }
    
    for (auto& i : ans) {
        cout << i << endl;
    }
    
    return 0;
	// your code goes here

}
