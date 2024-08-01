#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        bool ans = true;
        int n;
        cin >> n;
        vector<int> num(n);
        
        for (int j = 0; j < n; j ++) {
            cin >> num[j];
        }
        
        sort (num.begin(), num.end());
        
        for (int j = 0; j < n - 1; j ++) {
            if (num[j + 1] - num[j] > 1){
                ans = false;
            }
        }
        if (ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
	// your code goes here

}
