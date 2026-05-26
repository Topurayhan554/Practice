#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count_minus_one = 0;
    int count_zero = 0;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        if(val == -1){
            count_minus_one++;
        }
        else if(val == 0){
            count_zero++;
        }
    }
    int min_ops = count_zero;
    if(count_minus_one % 2 != 0){
        min_ops += 2;
    }
    cout << min_ops << endl;
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
