#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i++) {
        int len;
        cin >> len;
        
        int min, max;
        cin >> min;
        max = min;
        
        for (int i = 1; i < len; i ++) {
            int temp;
            cin >> temp;
            if (temp > max) {
                max = temp;
            }
            if (temp < min) {
                min = temp;
            }
        }
        
        ans[i] = max - min;
    }
    
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
	// your code goes here

}
