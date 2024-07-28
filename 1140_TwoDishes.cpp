#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    int ans[T];
    
    for  (int i = 0; i < T; i ++) {
        int N, A, B, C;
        
        cin >> N;
        cin >> A;
        cin >> B;
        cin >> C;
        
        if (B < N) {
            ans[i] = 0;
            continue;
        }
        
        int dishes = 0;
        
        if (A <= B) {
            dishes += A;
            A = 0;
            B = B - A;
        }
        else {
            dishes += B;
            B = 0;
            A = A - B;
        }
        
        
        if (C <= B) {
            dishes += C;
            C = 0;
            B = B - C;
        }
        else {
            dishes += B;
            B = 0;
            C = C - B;
        }
        
        if (dishes >= N) {
            ans[i] = 1;
        }
        else {
            ans[i] = 0;
        }
    }
    
    for (int i = 0; i < T; i ++) {
        if (ans[i]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
	// your code goes here

}
