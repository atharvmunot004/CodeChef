#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if ((s.size() == 2) && (s[0] == '1') && (s[1] == '0')){
            cout << s << endl;
            continue;
        }
        int zero = 0;
        int one = 0;
        
        for (char c : s) {
            if (c == '0') {
                zero ++;
            }
            else {
                one ++;
            }
        }
        
        string result = string(zero, '0') + string(one, '1');
        cout << result << endl;
        
    }
    
    return 0;
}
