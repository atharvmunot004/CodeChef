#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to handle a single test case
void processTestCase() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> intervals(N);
    vector<int> arrivals(M);

    // Read intervals
    for (int i = 0; i < N; i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    // Read arrival times
    for (int i = 0; i < M; i++) {
        cin >> arrivals[i];
    }

    // Sort the intervals by their start times
    sort(intervals.begin(), intervals.end());

    // Process each arrival
    for (int i = 0; i < M; i++) {
        int P = arrivals[i];
        int waitTime = -1;

        // Binary search to find the interval of interest
        int low = 0, high = N - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (P >= intervals[mid].first && P < intervals[mid].second) {
                // Person arrives within the interval, no wait
                waitTime = 0;
                break;
            } else if (P < intervals[mid].first) {
                // Check if this interval is the next opening time
                waitTime = intervals[mid].first - P;
                high = mid - 1;
            } else {
                // Person arrives after this interval, search next
                low = mid + 1;
            }
        }

        // Output the waiting time or -1 if they wait forever
        cout << waitTime << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        processTestCase();
    }

    return 0;
}
