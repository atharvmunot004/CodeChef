#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans[N];
    
    for (int i = 0; i < N; i ++) {
        int x;
        cin >> x;
        
        if (x < 100) {
            ans[i] = 0;
        }
        else if (x < 200) {
            ans[i] = 1;
        }
        else {
            ans[i] = 2;
        }
    }
    
    for (int i = 0; i < N; i ++) {
        if (ans[i] == 0) {
            cout << "Easy" << endl;
        }
        else if (ans[i] == 1) {
            cout << "Medium" << endl;
        }
        else {
            cout << "Hard" << endl;
        }
    }
    
	// your code goes here

}
