#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Number of test cases
    
    long long ans[n] = {0};
    // to store the results
    
    for (int i = 0; i < n; i ++) {
        long long num;
        cin >> num;
        
        while (num) {
            ans[i] = ans[i] * 10 + (num % 10);
            num /= 10;
        }
    }
    
    for (const auto& result : ans) {
        cout << result << endl;
    }
    
    return 0;

}
