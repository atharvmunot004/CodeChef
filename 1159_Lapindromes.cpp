#include <bits/stdc++.h>
using namespace std;

bool isLapindrome(const string &s) {
    int len = s.length();
    int mid = len / 2;

    string left = s.substr(0, mid);
    string right = (len % 2 == 0) ? s.substr(mid) : s.substr(mid + 1);

    unordered_map<char, int> leftFreq, rightFreq;

    for (char ch : left) {
        leftFreq[ch]++;
    }

    for (char ch : right) {
        rightFreq[ch]++;
    }

    return leftFreq == rightFreq;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;
        if (isLapindrome(S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
