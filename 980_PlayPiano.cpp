#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int A = 0;
        int B = 0;
        bool ans = true;
        if (s.length() % 2) {
            ans = false;
        }
        else {
            for (int i = 0; i < s.length(); i += 2) {
                if (!(((s[i] == 'A') && (s[i + 1] == 'B')) or ((s[i] == 'B') && (s[i + 1] == 'A')))) {
                    ans = false;
                }
            }
        }
        
            
        
        if (ans) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
    return 0;
	// your code goes here

}
