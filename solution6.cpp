#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long sum = 0;
    long long min_height = -1;
    for(int i = 1; i <= n; i++){
        long long a;
        cin >> a;
        sum += a;
        long long current_max_avg = sum / i;
        if(min_height == -1){
            min_height = current_max_avg;
        }
        else{
            min_height = min(min_height, current_max_avg);
        }
        cout << min_height << (i == n ? "" : " ");
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
