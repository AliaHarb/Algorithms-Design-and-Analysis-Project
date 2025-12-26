#include <iostream>
#include <vector>
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
    int n;
    long long t;
    cout << "Enter number of machines: ";
    cin >> n;
    
    cout << "Enter target number of products: ";
    cin >> t;
    
    vector<long long> k(n);  
    cout << "Enter production time for each machine: ";
    for(int i=0;i<n;i++){
        cin >> k[i];
    }

    long long result = brute_force(k, t); 
    cout << "Minimum time required: " << result << " seconds" << endl;

    return 0;
}
