#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        unordered_set<int> uniqueDays;
        for (int i = 0; i < n; ++i) {
            int day;
            cin >> day;
            uniqueDays.insert(day);
        }
        cout << uniqueDays.size() << "\n";
    }

    return 0;
}
