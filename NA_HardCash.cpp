#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int len;
        cin >> len;
        int k;
        cin >> k;
        
        long long sum = 0;
        
        for (int j = 0; j < len; j ++) {
            int temp;
            cin >> temp;
            sum += temp;
        }
        
        ans [i] = sum % k;
    }
    
    for (int i = 0; i < n; i ++) {
       cout << ans[i] << endl; 
    }
    
	// your code goes here

}
