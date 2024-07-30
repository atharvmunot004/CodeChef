#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> nums(n);
        
        for (int i = 0; i < n; i ++) {
            cin >> nums[i];
        }
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n && k != 0; i ++){
            if (nums[i] < 0) {
                nums[i] *= -1;
                k --;
            }
            else {
                break;
            }
        }
        
        int sum = 0;
        
        for (int i = 0; i < n; i ++) {
            if (nums[i] >= 0) {
                sum += nums[i];
            }
        }
        
        cout << sum << endl;
        
    }
    
    
}
