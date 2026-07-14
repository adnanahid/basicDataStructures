#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    int x = 0;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a&b || b&c || a&c) x++;
    }
    cout << x << "\n";

    return 0;
}