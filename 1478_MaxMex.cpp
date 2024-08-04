#include <bits/stdc++.h>
using namespace std;

int findMaxMex(vector<int>& nums, int k) {
    set<int> unique_nums(nums.begin(), nums.end());
    int mex = 0;

    for (int num : unique_nums) {
        if (num > mex) {
            int gap = num - mex;
            if (gap <= k) {
                k -= gap;
                mex = num;
            } else {
                return mex + k;
            }
        }
        mex++;
    }
    return mex + k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        cout << findMaxMex(nums, k) << endl;
    }

    return 0;
}
