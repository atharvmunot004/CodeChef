#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int g, c;
        cin >> g >> c;
        
        // Calculate the smallest height H
        int H = (c * c) / (2 * g);
        
        cout << H << endl;
    }
    return 0;
	// your code goes here

}
