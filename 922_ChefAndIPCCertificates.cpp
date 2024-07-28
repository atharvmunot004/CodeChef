#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n;
    cin >> m;
    cin >> k;
    int pass = 0;
    
    
    for (int i = 0; i < n; i ++) {
        int min = 0;
        
        
        for (int i = 0; i < k; i ++) {
            int temp;
            cin >> temp;
            min += temp;
        }
        
        int q;
        cin >> q;
        
        if ((q < 11) && (min >= m)) {
            pass ++;
        }
    }
    cout << pass <<endl;
	// your code goes here

}
