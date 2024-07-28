#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        long long N, X, K;
        cin >> N >> X >> K;

        long long Y = N - X;

        long long ungrouped_boys = X % K;
        long long ungrouped_girls = Y % K;

        long long pairs = min(ungrouped_boys, ungrouped_girls);

        long long reading_students = (ungrouped_boys + ungrouped_girls) - 2 * pairs;

        cout << reading_students << endl;
    }

    return 0;
	// your code goes here

}
