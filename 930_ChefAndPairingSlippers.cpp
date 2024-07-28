#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, L, X;
        cin >> N >> L >> X;
        
        // Calculate the number of right slippers
        int R = N - L;
        
        // Calculate the maximum number of pairs
        int pairs = min(L, R);
        
        // Calculate the total revenue
        int revenue = pairs * X;
        
        // Output the result
        cout << revenue << endl;
    }
    
    return 0;
	// your code goes here

}
