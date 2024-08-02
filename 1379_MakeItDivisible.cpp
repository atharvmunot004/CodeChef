#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    // while (t --) {
    //     int n;
    //     cin >> n;
    //     long long num = static_cast<long long>(pow (10, n));
    //     cout << num;
    //     num -= 7;
        
    //     cout << num << endl;
        
    // }
    while (t--) {
        int N;
        cin >> N;

        string result;

        if (N == 1) {
            result = "3";
        } else {
            result = "3" + string(N - 1, '0');
            result[N - 1] = '3';
        }

        cout << result << endl;
    }

    
    return 0;
	// your code goes here

}
