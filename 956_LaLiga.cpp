#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of scenarios

    while (T--) {
        string team1, team2, team3, team4;
        int goals1, goals2, goals3, goals4;

        // Read input for the four lines
        cin >> team1 >> goals1;
        cin >> team2 >> goals2;
        cin >> team3 >> goals3;
        cin >> team4 >> goals4;

        // Initialize variables to store goals
        int barcaGoals = 0, eibarGoals = 0, madridGoals = 0, malagaGoals = 0;

        // Assign goals to respective teams
        if (team1 == "Barcelona") {
            barcaGoals = goals1;
        } else if (team1 == "Eibar") {
            eibarGoals = goals1;
        } else if (team1 == "RealMadrid") {
            madridGoals = goals1;
        } else if (team1 == "Malaga") {
            malagaGoals = goals1;
        }

        if (team2 == "Barcelona") {
            barcaGoals = goals2;
        } else if (team2 == "Eibar") {
            eibarGoals = goals2;
        } else if (team2 == "RealMadrid") {
            madridGoals = goals2;
        } else if (team2 == "Malaga") {
            malagaGoals = goals2;
        }

        if (team3 == "Barcelona") {
            barcaGoals = goals3;
        } else if (team3 == "Eibar") {
            eibarGoals = goals3;
        } else if (team3 == "RealMadrid") {
            madridGoals = goals3;
        } else if (team3 == "Malaga") {
            malagaGoals = goals3;
        }

        if (team4 == "Barcelona") {
            barcaGoals = goals4;
        } else if (team4 == "Eibar") {
            eibarGoals = goals4;
        } else if (team4 == "RealMadrid") {
            madridGoals = goals4;
        } else if (team4 == "Malaga") {
            malagaGoals = goals4;
        }

        // Check conditions for Barcelona winning the title
        if (barcaGoals > eibarGoals && madridGoals < malagaGoals) {
            cout << "Barcelona" << endl;
        } else {
            cout << "RealMadrid" << endl;
        }
    }

    return 0;
	// your code goes here

}
