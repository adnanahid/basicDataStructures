#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        cin.ignore();

        string a, b;
        cin >> a >> b;

        int min_len = min(n, m);
        for (int i = 0; i < min_len; i++)
            if (a[i] == b[i]) cout << a[i];
            else break;
        cout << '\n';
    }
    return 0;
}
