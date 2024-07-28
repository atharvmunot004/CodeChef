#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int X, A, B, C;
        cin >> X >> A >> B >> C;

        int prices[3] = {A, B, C};

        sort(prices, prices + 3);

        int minCost = (X - 1) * prices[0] + prices[1];

        cout << minCost << endl;
    }

    return 0;
	// your code goes here

}
