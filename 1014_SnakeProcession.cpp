#include <bits/stdc++.h>
using namespace std;
bool isValidReport(const string& report) {
    int countH = 0;

    for (char ch : report) {
        if (ch == 'H') {
            if (countH > 0) {
                return false;
            }
            countH++;
        } else if (ch == 'T') {
            if (countH == 0) {
                return false;
            }
            countH--;
        }
    }
    return countH == 0;
}

int main() {
    int R;
    cin >> R; 
    while (R--) {
        int L;
        cin >> L;  
        string report;
        cin >> report;

        if (isValidReport(report)) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
