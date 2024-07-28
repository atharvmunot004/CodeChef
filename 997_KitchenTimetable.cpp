#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;        
        vector<int> A(N);
        vector<int> B(N);        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }        
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }        
        int count = 0;
        int prevTime = 0;
        for (int i = 0; i < N; ++i) {
            int availableTime = A[i] - prevTime;
            if (B[i] <= availableTime) {
                count++;
            }
            prevTime = A[i];
        }
        
        cout << count << endl;
    }
    
    return 0;
	// your code goes here

}
