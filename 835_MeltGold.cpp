#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long required_increase = x - y;
        
        
        long long low = 1, high = 1000000; 
        long long answer = high;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sum = mid * (mid + 1) / 2;
            
            if (sum >= required_increase) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        cout << answer << endl;
    }
    return 0;
	// your code goes here

}
