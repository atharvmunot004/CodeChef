#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D; 

        int totalInA = B - A + 1;
        int totalInC = D - C + 1;

        int overlap = max(0, min(B, D) - max(A, C) + 1);

        int result = totalInA + totalInC - overlap;

        cout << result << endl;
    }
	// your code goes here

}
