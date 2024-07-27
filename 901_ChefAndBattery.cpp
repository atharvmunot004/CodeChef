#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ans = 0;
        while (N != 50) {
            if (N > 50) {
                N -= 3;
            }
            else {
                N += 2;
            }
            ++ ans;
        }
        
        cout << ans << endl;
    }

    return 0;
	// your code goes here

}
