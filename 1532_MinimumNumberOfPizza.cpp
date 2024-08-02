#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t --) {
        long long N, K;
        cin >> N >> K;
        
        long long gcd_value = __gcd(N, K);
        long long min_pizzas = N / gcd_value;
        
        cout << min_pizzas << endl;
    }
    
    return 0;
    
	// your code goes here

}
