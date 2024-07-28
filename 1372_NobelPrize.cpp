#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i ++) {
        int n, m;
        cin >> n >> m;
        
        vector<int> topics(m);
        
        for (int j = 0; j < n; j ++) {
            int per;
            cin >> per;
            topics[per - 1] ++;
        }
        
        bool ans = false;
        
        for (int i : topics) {
            if (i == 0) {
                ans = true;
            }
        }
        
        if (ans) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        
    }
	// your code goes here

}
