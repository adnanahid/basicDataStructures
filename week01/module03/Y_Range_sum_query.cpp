#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
        arr[i + 1] = arr[i] + arr[i + 1];

    int l, r;

    while (q--) {
        cin >> l >> r;

        if (l == 1)
            cout << arr[r - 1] << '\n';
        else
            cout << arr[r - 1] - arr[l - 2] << '\n';
    }

    return 0;
}