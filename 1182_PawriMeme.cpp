#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        string target = "party";
        string replacement = "pawri";

        size_t pos = 0;
        while ((pos = S.find(target, pos)) != string::npos) {
            S.replace(pos, target.length(), replacement);
            pos += replacement.length();
        }

        cout << S << endl;
    }

    return 0;

	// your code goes here

}
