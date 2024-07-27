#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;
        
        double cost_petrol = (n / a) * x;
        double cost_diesel = (n / b) * y;
        
        if (cost_petrol < cost_diesel) {
            cout << "PETROL" << endl;
        } else if (cost_diesel < cost_petrol) {
            cout << "DIESEL" << endl;
        } else {
            cout << "ANY" << endl;
        }
    }
    return 0;
	// your code goes here

}
