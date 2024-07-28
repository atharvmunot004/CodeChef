#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; // Number of contestants
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        int solvedCount = 0; // Count of problems solved
        for (int j = 0; j < 5; ++j) {
            int problem;
            cin >> problem;
            solvedCount += problem; // Add to solved count if problem is solved (1)
        }
        
        // Determine classification based on number of problems solved
        switch (solvedCount) {
            case 0:
                cout << "Beginner" << endl;
                break;
            case 1:
                cout << "Junior Developer" << endl;
                break;
            case 2:
                cout << "Middle Developer" << endl;
                break;
            case 3:
                cout << "Senior Developer" << endl;
                break;
            case 4:
                cout << "Hacker" << endl;
                break;
            case 5:
                cout << "Jeff Dean" << endl;
                break;
        }
    }
    
    return 0;
	// your code goes here

}
