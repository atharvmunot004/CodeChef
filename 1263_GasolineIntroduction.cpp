#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int N;
        cin >> N;
        
        int fuel = 0;
        int distance = 0;
        
        cin >> fuel;
        
        int track[N];
        
        track[0] = 0;
        
        for (int j = 1; j < N; j ++) {
            cin >> track[j];
        }
        
        while (fuel != 0) {
            fuel --;
            distance ++;
            
            fuel += track[distance % N];
            track[distance % N] = 0;
        }
        
        ans[i] = distance;
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
    
	// your code goes here

}
