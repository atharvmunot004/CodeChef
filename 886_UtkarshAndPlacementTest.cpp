#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        char first, second, third;
        char x, y;
        cin >> first >> second >> third;
        cin >> x >> y;
        
        // Map to store preference scores
        map<char, int> preference;
        preference[first] = 1;   // Highest preference
        preference[second] = 2;
        preference[third] = 3;   // Lowest preference
        
        // Determine which offer Utkarsh will accept
        if (preference[x] < preference[y]) {
            cout << x << endl;
        } else {
            cout << y << endl;
        }
    }
    return 0;
	// your code goes here

}
