#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    
    while (T--) {
        long long X, Y;
        cin >> X >> Y; // Rental and purchase costs
        
        if (X >= Y) {
            cout << 0 << endl; // If renting is not cheaper even for a month
        } else {
            cout << ((Y - 1) / X)  << endl; // Max months renting is cheaper
        }
    }
    
    return 0;
	// your code goes here

}
