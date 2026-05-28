#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    vector<int> freq(n + 2, 0); // To store frequencies of elements up to n+1
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= n + 1) {
            freq[a[i]]++;
        }
    }
    
    // 1. Calculate how many elements from 0 to k-1 are missing
    int missing_elements = 0;
    for (int i = 0; i < k; ++i) {
        if (freq[i] == 0) {
            missing_elements++;
        }
    }
    
    // 2. Count occurrences of k
    int count_k = freq[k];
    
    // 3. Determine the answer based on our cases
    if (missing_elements == 0 && count_k == 0) {
        cout << 0 << "\n";
    } else {
        cout << max(missing_elements, count_k) << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
