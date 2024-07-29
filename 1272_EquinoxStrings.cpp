#include <bits/stdc++.h>
using namespace std;
void determineWinner(int N, int A, int B) {
    string letters = "EQUINOX";
    long long sarthakPoints = 0;
    long long anuradhaPoints = 0;

    for (int i = 0; i < N; ++i) {
        string S;
        cin >> S;

        if (letters.find(S[0]) != string::npos) {
            sarthakPoints += A;
        } else {
            anuradhaPoints += B;
        }
    }

    if (sarthakPoints > anuradhaPoints) {
        cout << "SARTHAK" << endl;
    } else if (anuradhaPoints > sarthakPoints) {
        cout << "ANURADHA" << endl;
    } else {
        cout << "DRAW" << endl;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        determineWinner(N, A, B);
    }

    return 0;
}
