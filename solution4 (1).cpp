#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    int last_one = -1e9;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            if(i - last_one >= k){
                ans++;
            }
            last_one = i;
        }
    }
    cout << ans << endl;
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
