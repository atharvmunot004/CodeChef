#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Set of years when SnackDown was hosted
    unordered_set<int> hosted_years = {2010, 2015, 2016, 2017, 2019};

    int T;
    cin >> T;

    while (T--) {
        int year;
        cin >> year;

        if (hosted_years.find(year) != hosted_years.end()) {
            cout << "HOSTED" << endl;
        } else {
            cout << "NOT HOSTED" << endl;
        }
    }

    return 0;
	// your code goes here

}
