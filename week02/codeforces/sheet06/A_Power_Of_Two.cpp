#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0) 
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";
    
    return 0;
}