#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string feedback;
        cin >> feedback;

        if (feedback.find("010") != string::npos || feedback.find("101") != string::npos) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    }

    return 0;
	// your code goes here

}
