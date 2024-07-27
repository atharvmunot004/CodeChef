#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int notes = 0;
        notes += N / 100;
        N %= 100;
        notes += N / 50;
        N %= 50;
        notes += N / 10;
        N %= 10;
        notes += N / 5;
        N %= 5;
        notes += N / 2;
        N %= 2;
        notes += N / 1;
        N %= 1;
        cout << notes << endl;
    }
    return 0;
	// your code goes here

}
