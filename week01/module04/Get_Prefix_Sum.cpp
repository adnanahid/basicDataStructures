#include <bits/stdc++.h>
using namespace std;
typedef long long lld;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<lld> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}