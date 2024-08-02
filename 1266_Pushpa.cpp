#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        int n;
        cin >> n;
        map<int, int> towers;
        
        for (int i = 0; i < n; i ++) {
            int temp;
            cin >> temp;
            towers[temp] ++;
        }
        int MaxHeight = 0;
        
        for (auto i = towers.begin(); i != towers.end(); i ++) {
            int temp = i->first + (i->second - 1);
            if (temp > MaxHeight) {
                MaxHeight = temp;
            }
        }
        
        cout << MaxHeight << endl;
    }
    
    
    return 0;
	// your code goes here

}
