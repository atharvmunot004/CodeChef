#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N;
    cin >> N;

    unordered_set<char> knownLetters(S.begin(), S.end());

    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        bool canRead = true;
        
        for (char c : word) {
            if (knownLetters.find(c) == knownLetters.end()) {
                canRead = false;
                break;
            }
        }

        if (canRead) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
	// your code goes here

}
