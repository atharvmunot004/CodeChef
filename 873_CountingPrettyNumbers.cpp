#include <bits/stdc++.h>
using namespace std;


const int MAX = 100000;

void preprocess(vector<int>& pretty_count) {
    for (int i = 1; i <= MAX; ++i) {
        pretty_count[i] = pretty_count[i - 1];
        int last_digit = i % 10;
        if (last_digit == 2 || last_digit == 3 || last_digit == 9) {
            ++pretty_count[i];
        }
    }
}

int main() {
    vector<int> pretty_count(MAX + 1, 0);
    preprocess(pretty_count);

    int T;
    cin >> T;
    while (T--) {
        int L, R;
        cin >> L >> R;
        
        int result = pretty_count[R] - pretty_count[L - 1];
        cout << result << endl;
    }
    return 0;
}
