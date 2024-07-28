#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        long long N;
        cin >> N; // Number of days in the month

        // Calculate number of Saturdays
        long long complete_weeks = N / 7;
        long long extra_days = N % 7;
        
        // Calculate total Saturdays
        long long saturdays = complete_weeks + (extra_days >= 6 ? 1 : 0);
        
        cout << saturdays << endl;
    }
    
    return 0;
}
