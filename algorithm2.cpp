#include <bits/stdc++.h>
using namespace std;

bool can(long long time, const vector<long long>& k, long long t) {
    long long total = 0;
    for (int i = 0; i < k.size(); ++i) {
        total += time / k[i];
        if (total >= t) return true;
    }
    return false;
}

long long binary_search_solution(const vector<long long>& k, long long t) {
    long long l = 1, r = 1e18, ans = -1;

    while (l <= r) {
        long long mid = l + (r - l) / 2;
        if (can(mid, k, t)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<long long> k = {2, 3, 7};
    long long t = 10;
    cout << binary_search_solution(k, t);
    return 0;
}
