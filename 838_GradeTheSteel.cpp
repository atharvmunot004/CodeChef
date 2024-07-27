#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int hardness, tensile_strength;
        double carbon_content;
        cin >> hardness >> carbon_content >> tensile_strength;
        
        bool condition1 = hardness > 50;
        bool condition2 = carbon_content < 0.7;
        bool condition3 = tensile_strength > 5600;
        
        if (condition1 && condition2 && condition3) {
            cout << 10 << endl;
        } else if (condition1 && condition2) {
            cout << 9 << endl;
        } else if (condition2 && condition3) {
            cout << 8 << endl;
        } else if (condition1 && condition3) {
            cout << 7 << endl;
        } else if (condition1 || condition2 || condition3) {
            cout << 6 << endl;
        } else {
            cout << 5 << endl;
        }
    }
    return 0;
	// your code goes here

}
