#include <bits/stdc++.h>
using namespace std;

#define O(_) for(int l=0;l<_;++l)
#define I(x,y) (x<y?x:y)
#define II(x,y) (x>y?x:y)

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    O(n) cin >> A[l];
    int sixseven = n;
    for(int i = 0; i < n; i++){
        int a = 0, b = 0;
        for(int j = 0; j < n; j++){
            a += A[j] < A[i];
            b += A[j] > A[i];
        }
        sixseven = I(sixseven, II(a, b));
    }
    cout << sixseven << endl;
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
