#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin >> x;

    if(x > 2 && x % 2 == 0) cout << "YES";
    else cout << "NO";

    return 0;
}