#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool is_sorted = 1;
        for (int i = 0; i < n - 1; i++)
            if (a[i - 1] > a[i] || a[i] > a[i + 1]) {
                is_sorted = 0;
                break;
            }
        if (is_sorted) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}