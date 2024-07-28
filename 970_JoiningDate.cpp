#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;

        int changed_days = 0;
        for (int i = K + 1; i <= N; ++i) {
            int original_day = ceil(i / 5.0);
            int new_day = ceil((i - 1) / 5.0);
            
            if (original_day != new_day) {
                changed_days++;
            }
        }

        cout << changed_days << endl;
    }

    return 0;
	// your code goes here

}
