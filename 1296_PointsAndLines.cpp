#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        unordered_set<int> x_coordinates;
        unordered_set<int> y_coordinates;
        
        for (int i = 0; i < N; ++i) {
            int x, y;
            cin >> x >> y;
            x_coordinates.insert(x);
            y_coordinates.insert(y);
        }
        int total_lines = x_coordinates.size() + y_coordinates.size();
        cout << total_lines << endl;
    }
    
    return 0;
	// your code goes here

}
