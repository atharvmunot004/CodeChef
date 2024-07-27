#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int n;
        cin >> n;
        int sum = 0;
        
        for (int j = 0; j < n; j ++ ) {
            int temp;
            cin >> temp;
            sum += temp;
        }
        
        if (n % 2) {
            ans[i] = -1;
        }
        else {
            while (sum != 0) {
                if (sum > 0) {
                    sum -= 2;
                    ++ ans[i];
                }
                else {
                    sum += 2;
                    ++ ans[i];
                }
            }
            
        }
    }
    
    
    for (int i : ans) {
        cout << i <<endl;
    }
    
    return 0;
	// your code goes here

}
