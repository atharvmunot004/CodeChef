#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = to_string(n);
        if (isPalindrome(s)) {
            cout << "wins" << endl;
        } else {
            cout << "loses" << endl;
        }
    }
    return 0;
}
