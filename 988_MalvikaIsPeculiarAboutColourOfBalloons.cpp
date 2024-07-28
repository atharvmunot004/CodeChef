#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int count_a = 0, count_b = 0;

        for (char c : s) {
            if (c == 'a') {
                count_a++;
            } else if (c == 'b') {
                count_b++;
            }
        }

        int min_flips = min(count_a, count_b);

        cout << min_flips << endl;
    }

    return 0;
	// your code goes here

}
