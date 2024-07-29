#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> nums(n);
        
        for (int j = 0; j < n; j ++) {
            cin >> nums[j];
        }
        
        sort (nums.begin(), nums.end());
        
        cout << (nums[0] + nums[1]) << endl;
    }
	// your code goes here

}
