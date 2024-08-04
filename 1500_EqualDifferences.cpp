#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        int n;
        cin >> n;
        map<int, int> nums;
        
        for (int i = 0; i < n; i ++) {
            int temp;
            cin >> temp;
            nums[temp] ++;
        }
        
        int max = 0;
        
        for (auto& [i, x] : nums) {
            if (x > max) {
                max = x;
            }
        }
        
        if ((n == 2) || (n == 1)) {
            cout << "0" << endl;
        }
        else if (max == 1) {
            cout << n - 2 << endl;
        }
        else {
            cout << n - max << endl;
        }
    }
    
    return 0;
	// your code goes here

}
