#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        int n;
        cin >> n;
        
        map<int, int> colours;
        
        int operations = 0;
        
        for (int i = 0; i < n; i ++) {
            int temp;
            cin >> temp;
            colours[temp] ++;
            
            if(colours[temp] > 1){
                operations ++;
            }
        }
        
        cout << operations << endl;
    }
    
    return 0;
	// your code goes here

}
