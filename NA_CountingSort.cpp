#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        int n;
        cin >> n;
        vector<int> nums(n);
        
        for (int i = 0; i < n; i ++) {
            cin >> nums[i];
        }
        
        sort (nums.begin(), nums.end());
        for (int i : nums) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
	// your code goes here

}
