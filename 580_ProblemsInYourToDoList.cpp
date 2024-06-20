#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Number of test cases
    
    vector<int> ans(n); 
    // integer vector storing the result of how many problems are to be removed
    
    for(int i = 0; i < n; i ++) {
        int to;
        cin >> to;
        // The number of problems in to do list
        
        for (int j = 0; j < to; j ++) {
            int rating;
            cin >> rating;
            
            if (rating >= 1000) {
                ans[i] ++;
            }
        }
    }
    for (const auto& result : ans) {
        cout << result << endl;
    }
}
