#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<int> count;
    for (int i = 0; i < n; i ++) {
        int temp;
        cin >> temp;
        count.insert(temp);
    }
    
    cout << "2" << endl;
    cout << count.size() << endl;
    
  
    return 0;
}
