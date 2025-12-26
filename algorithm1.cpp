#include <bits/stdc++.h>
using namespace std;

long long brute_force(const vector<long long>& k, long long t) {
    long long time = 0;
    int n = k.size();

    while (true) {
        time++;
        long long produced = 0;

        for (int i = 0; i < n; ++i) {
            produced += time / k[i];
            if (produced >= t) break;
        }

        if (produced >= t)
            return time;
    }
}

int main() {
    vector<long long> k = {2, 3, 7};
    long long t = 10;
    cout << brute_force(k, t);
    return 0;
}
