#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2 (unsigned int x) {
    if ((x - 1) & x) {
        return false;
    }
    else {
        return true;
    }
}

int minOperations(unsigned int A, unsigned int B) {
    int operations = 0;

    while (A != B) {
        if (!(isPowerOf2(A))) {
            A /= 2;
        }
        else {
            if (A > B) {
                A /= 2;
            }
            else {
                A *= 2;
            }
        }
        operations ++;
    }

    return operations;
}

int main() {
    int T;
    cin >> T;
    
    // unsigned int x = 4;
    // unsigned int y = 5;
    // cout << isPowerOf2(x) << endl;
    // cout << isPowerOf2(y) << endl;
    // return 0;
    
    while (T--) {
        unsigned int A, B;
        cin >> A >> B;

        int result = minOperations(A, B);
        cout << result << endl;
    }

    return 0;
}
