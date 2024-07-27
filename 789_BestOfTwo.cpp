#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        multiset <int, greater<int>> alice = {a1, a2, a3};
        multiset <int, greater<int>> bob = {b1, b2, b3};
        auto itr1 = alice.begin();
        auto itr2 = bob.begin();
        
        int aliceScore = *itr1 + *(++itr1);
        int bobScore = *itr2 + *(++itr2);
        
        if (aliceScore > bobScore) {
            ans[i] = "Alice";
        }
        
        else if (aliceScore == bobScore) {
            ans[i] = "Tie";
        }
        
        else {
            ans[i] = "Bob";
        }
    }
    
    
    for (auto& i : ans) {
        cout << i << endl;
    }
    
    return 0;
	// your code goes here

}
