#include <bits/stdc++.h>
using namespace std;

int maxItemsWithCoupon(int N, int K, vector<int>& costs) {
    sort(costs.begin(), costs.end());  // Sort the costs

    // Prefix sum array to store the sum of the cheapest i items
    vector<long long> prefixSum(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        prefixSum[i + 1] = prefixSum[i] + costs[i];
    }
    
    // Find the maximum number of items without using the coupon
    int maxItemsWithoutCoupon = 0;
    for (int i = 0; i <= N; ++i) {
        if (prefixSum[i] <= K) {
            maxItemsWithoutCoupon = i;
        } else {
            break;
        }
    }

    // Find the maximum number of items using the coupon
    int maxItemsWithCoupon = 0;
    for (int i = 1; i <= N; ++i) {
        long long discountedCost = (costs[i - 1] + 1) / 2;
        long long totalCostWithCoupon = prefixSum[i - 1] + discountedCost;

        if (totalCostWithCoupon <= K) {
            int itemsWithCoupon = i;

            // Add remaining items without coupon
            for (int j = i; j <= N; ++j) {
                if (totalCostWithCoupon + (prefixSum[j] - prefixSum[i]) <= K) {
                    itemsWithCoupon = j;
                } else {
                    break;
                }
            }

            maxItemsWithCoupon = max(maxItemsWithCoupon, itemsWithCoupon);
        }
    }

    return max(maxItemsWithoutCoupon, maxItemsWithCoupon);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> costs(N);
        for (int i = 0; i < N; ++i) {
            cin >> costs[i];
        }
        cout << maxItemsWithCoupon(N, K, costs) << endl;
    }

    return 0;
}
