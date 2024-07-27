#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N;  // Number of tyres

        // Calculate remaining tyres after making the maximum number of cars
        int remaining_tyres = N % 4;

        // Determine if a bike can be manufactured
        if (remaining_tyres >= 2) {
            cout << "YES" << endl;  // A bike can be manufactured
        } else {
            cout << "NO" << endl;   // A bike cannot be manufactured
        }
    }

    return 0;
	// your code goes here

}
