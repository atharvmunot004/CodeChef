#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int lateCount = 0;
        
        for (int i = 0; i < N; ++i) {
            int S, J;
            cin >> S >> J;
            
            if (J - S > 5) {
                ++lateCount;
            }
        }
        
        cout << lateCount << endl;
    }
    
    return 0;
}
