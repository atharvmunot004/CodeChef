#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int nums = 0;
        
        string s;
        cin >> s;
        
        int count1s = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count1s++;
            }
        }
        
        // The number of substrings that start and end both in '1'
        long long result = (long long)count1s * (count1s + 1) / 2;
        cout << result << endl;
    }
    return 0;
	// your code goes here

}
