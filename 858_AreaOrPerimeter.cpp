#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, B;
    cin >> L >> B;

    int area = L * B;
    int perimeter = 2 * (L + B);

    if (area > perimeter) {
        cout << "Area" << endl;
        cout << area << endl;
    } else if (perimeter > area) {
        cout << "Peri" << endl;
        cout << perimeter << endl;
    } else {
        cout << "Eq" << endl;
        cout << area << endl;
    }

    return 0;
	// your code goes here

}
