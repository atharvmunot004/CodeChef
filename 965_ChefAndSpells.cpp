#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int a, b, c;
        int sum = 0;
        
        cin >> a;
        sum += a;
        int min = a;
        
        cin >> b;
        sum += b;
        if (min > b) {
            min = b;
        }
        
        cin >> c;
        sum += c;
        if (min > c) {
            min = c;
        }
        
        ans[i] = sum - min;
    }
    
    for (int  i = 0; i < n; i ++) {
         cout << ans[i] << endl;
    }
    
    return 0;
	// your code goes here

}
