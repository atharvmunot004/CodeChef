#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char id;
        cin >> id;
        if (id == 'B' || id == 'b') {
            cout << "BattleShip" << endl;
        } else if (id == 'C' || id == 'c') {
            cout << "Cruiser" << endl;
        } else if (id == 'D' || id == 'd') {
            cout << "Destroyer" << endl;
        } else if (id == 'F' || id == 'f') {
            cout << "Frigate" << endl;
        }
    }
    return 0;
	// your code goes here

}
