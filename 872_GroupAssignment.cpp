#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        int partner;
        if (X <= N) {
            partner = 2 * N - X + 1;
        } else {
            partner = 2 * N - X + 1;
        }
        
        cout << partner << endl;
    }
    return 0;
	// your code goes here

}
