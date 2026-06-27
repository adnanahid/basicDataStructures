#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int row = 1; row <= n / 2; row++) {
        for (int col = 1; col <= n; col++) {
            if (row == col) cout << "\\";
            else if (col == (n + 1) - row) cout << "/";
            else cout << " ";
        }
        cout << '\n';
    }
    for (int i = 1; i <= n / 2; i++)
        cout << " ";

    cout << "X" << "\n";

    for (int row = n / 2; row >= 1; row--) {
        for (int col = n; col >= 1; col--) {
            if (row == col) cout << "\\";
            else if (col == (n + 1) - row) cout << "/";
            else cout << " ";
        }
        cout << '\n';
    }

    return 0;
}