#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int len;
        cin >> len;
        
        int speed;;
        cin >> speed;
        
        int cars = 1;
        
        for (int j = 1; j < len; j ++) {
            int temp;
            cin >> temp;
            
            if (temp <= speed) {
                cars ++;
                speed = temp;
            }
        }
        
        ans[i] = cars;
    }
    
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
	// your code goes here

}
