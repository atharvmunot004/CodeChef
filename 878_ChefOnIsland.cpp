#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, y, x_r, y_r, D;
        cin >> x >> y >> x_r >> y_r >> D;
        
        // Calculate total required food and water
        int total_food_needed = x_r * D;
        int total_water_needed = y_r * D;
        
        // Check if the supplies are sufficient
        if (x >= total_food_needed && y >= total_water_needed) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
