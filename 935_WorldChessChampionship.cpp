#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;
        string results;
        cin >> results;
        
        int carlsen_points = 0;
        int chef_points = 0;
        
        // Calculate points based on the results string
        for (char game : results) {
            if (game == 'C') {
                carlsen_points += 2;
            } else if (game == 'N') {
                chef_points += 2;
            } else if (game == 'D') {
                carlsen_points += 1;
                chef_points += 1;
            }
        }
        
        int total_prize = 100 * X;
        int carlsen_prize = 0;

        // Determine the prize money based on the scores
        if (carlsen_points > chef_points) {
            carlsen_prize = 60 * X;
        } else if (chef_points > carlsen_points) {
            carlsen_prize = 40 * X;
        } else {
            carlsen_prize = 55 * X;
        }
        
        cout << carlsen_prize << endl;
    }
    
    return 0;
	// your code goes here

}
