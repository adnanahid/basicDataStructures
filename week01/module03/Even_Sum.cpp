#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int sum = 0, even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0) even++;
            if (a[i] % 2 == 1) odd++;
        }
        if (sum % 2 == 0 && even > 0) cout << "Yes" << '\n';
        else if (sum % 2 == 1 && odd > 0) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}
