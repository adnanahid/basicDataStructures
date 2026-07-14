#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int ans = 0;
    for (int x : a)
        ans += (x >= a[k-1] && x > 0);

    cout << ans << "\n";

    return 0;   
}