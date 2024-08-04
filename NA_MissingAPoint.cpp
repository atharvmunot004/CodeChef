#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        int n;
        cin >> n;
        n = 4 * n - 1;
        vector<pair <int, int>> points(n);
        
        for (int i = 0; i < n; i ++) {
            cin >> points[i].first >> points[i].second;
        }
        
        map<int, int> x_count, y_count;
        
        for (const auto& point : points) {
            x_count[point.first]++;
            y_count[point.second]++;
        }
        
        int missing_x, missing_y;
        for (const auto& [x, count] : x_count) {
            if (count % 2 != 0) {
                missing_x = x;
                break;
            }
        }
        
        for (const auto& [y, count] : y_count) {
            if (count % 2 != 0) {
                missing_y = y;
                break;
            }
        }
        
        cout << missing_x << " " << missing_y << endl;
    }

        
        
    
    return 0;
}
