#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n, m, a;
    cin >> n >> m >> a;
    long long slabNeed = ceil(n / a) * ceil(m / a);
    cout << slabNeed << "\n";

    return 0;
}