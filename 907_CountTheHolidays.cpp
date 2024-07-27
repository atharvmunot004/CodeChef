#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    // Calculate the fixed holidays (Saturdays and Sundays)
    set<int> fixed_holidays;
    for (int i = 1; i <= 30; ++i) {
        int day_of_week = (i - 1) % 7;
        if (day_of_week == 5 || day_of_week == 6) {  // Saturday or Sunday
            fixed_holidays.insert(i);
        }
    }

    while (T--) {
        int N;
        cin >> N;

        set<int> holidays = fixed_holidays;

        for (int i = 0; i < N; ++i) {
            int festival_day;
            cin >> festival_day;
            holidays.insert(festival_day);
        }

        cout << holidays.size() << '\n';
    }

    return 0;
	// your code goes here

}
