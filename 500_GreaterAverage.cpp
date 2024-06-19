#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // Variable to store the number of test cases
    cin >> n; // Read the number of test cases
    int ans[n]; // Array to store the results of each test case
    
    for (int i = 0; i < n; i ++) {
        float a, b, c; // Variables to store the three floating-point numbers for each test case
        cin >> a >> b >> c; // Read the three numbers from input
        
        // Check if the average of a and b is greater than c
        if (((a + b) / 2) > c) {
            ans[i] = 1; // Store 1 in the ans array if the condition is true
        }
        else {
            ans[i] = 0; // Store 0 in the ans array if the condition is false
        }
    }
    
    // Output the results for each test case
    for (int i = 0; i < n; i ++) {
        if (ans[i]) {
            cout << "YES" << endl; // Output "YES" if the condition was true
        }
        else {
            cout << "NO" << endl; // Output "NO" if the condition was false
        }
    }
    // your code goes here

}
