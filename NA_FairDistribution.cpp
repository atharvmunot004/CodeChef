#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        int n, k;
        cin >> n >> k;
        
        vector<int> nums(n);
        
        for (int i = 0; i < n; i ++) {
            cin >> nums[i];
        }
        
        sort (nums.begin(), nums.end());
        
        int left = 0;
        int right = k - 1;
        
        int minDiff = INT_MAX;
        
        for (int i = 0; i <= n - k; i++) {
            int temp = nums[i + k - 1] - nums[i];
            minDiff = min(minDiff, temp);
        }
        cout << minDiff << endl;
        
    }
    
    return 0;
	// your code goes here

}
