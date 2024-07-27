#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int w = 0, l = 0;
    int p1 = 0, p2 = 0;
    
    for (int i = 0; i < n; i ++) {
        int a, b;
        cin >> a >> b;
        p1 += a;
        p2 += b;
        
        if ((p1 > p2) && ((p1 - p2) > l)){
            w = 1;
            l = p1 - p2;
        }
        else if ((p2 > p1) && ((p2 - p1) > l)){
            w = 2;
            l = p2 - p1;
        }
    }
    
    cout << w << " " << l;
    return 0;
	// your code goes here

}
