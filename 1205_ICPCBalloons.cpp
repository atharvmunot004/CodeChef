#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_set<int> seen;
        int res = 0;
        
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (temp <= 7) {
                seen.insert(temp);
            }
            res++;
            if (seen.size() == 7) {
                break;
            }
        }

        // Skip the remaining inputs for this test case
        for (int i = res; i < n; i++) {
            int temp;
            cin >> temp;
        }

        cout << res << endl;
    }
    return 0;
}
