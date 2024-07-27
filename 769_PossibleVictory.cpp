#include <bits/stdc++.h>
using namespace std;

int main() {
     int r, o, c;
    cin >> r >> o >> c;
    
    // Calculate the maximum possible runs Team B can score in the remaining overs
    int max_possible_score = c + (20 - o) * 36;
    
    if (max_possible_score > r) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;

}
