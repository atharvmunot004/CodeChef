#include <bits/stdc++.h>
using namespace std;

bool canArrange (const vector<int>& arr, int n, int x) {
    vector<int> nums = arr;
    for (int i = 0; i < n - 1; i ++) {
        if (nums[i] > nums[i + 1]) {
            if ((nums[i] + nums[i + 1]) <= x) {
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
            else {
                return false;
            }
        }
        
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        int n, x;
        cin >> n >> x;
        
        vector<int> nums(n);
        for (int i = 0; i < n; i ++) {
            cin >> nums[i];
        }
        
        if (canArrange(nums, n, x)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        
        
    }
    
    return 0;
	// your code goes here

}
