#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int a, b, c, d, k;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> k;
        
        int dist = 0;
        
        if (a > c) {
            dist += a - c;
        }
        else {
            dist += c - a;
        }
        
        if (b > d) {
            dist += b - d;
        }
        else {
            dist += d - b;
        }
        
        if (dist > k) {
            ans[i] = 0;
            continue;
        }
        
        
        else {
            if ((k - dist) % 2 == 0) {
                ans[i] = 1;
            }
            else {
                ans[i] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i ++) {
        if (ans[i]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
	// your code goes here

}
