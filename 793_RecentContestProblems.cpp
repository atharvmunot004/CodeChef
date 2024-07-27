#include <bits/stdc++.h>
using namespace std;

void countProblems(int testCases) {
    while (testCases--) {
        int n;
        cin >> n;
        vector<string> contestCodes(n);
        
        int start38Count = 0;
        int ltime108Count = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> contestCodes[i];
            if (contestCodes[i] == "START38") {
                start38Count++;
            } else if (contestCodes[i] == "LTIME108") {
                ltime108Count++;
            }
        }
        
        cout << start38Count << " " << ltime108Count << endl;
    }
}


int main() {
    int t;
    cin >> t;
    countProblems(t);
    return 0;

}
