#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Check number of digits
    if (N == 0) {
        cout << "1" << endl;
    } else {
        // Calculate number of digits
        int digits = floor(log10(N)) + 1;

        if (digits == 1) {
            cout << "1" << endl;
        } else if (digits == 2) {
            cout << "2" << endl;
        } else if (digits == 3) {
            cout << "3" << endl;
        } else {
            cout << "More than 3 digits" << endl;
        }
    }

    return 0;
	// your code goes here

}
