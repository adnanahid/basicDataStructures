// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= sqrt(n); i++)
//         cout << i << '\n';

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> divisors;

    // Find all divisors up to sqrt(n)
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i); // Store the smaller divisor

            if (n / i != i) {
                divisors.push_back(n / i); // Store the larger paired divisor
            }
        }
    }

    // Sort the divisors in ascending order
    sort(divisors.begin(), divisors.end());

    // Print the sorted divisors
    for (int divisor : divisors) {
        cout << divisor << '\n';
    }

    return 0;
}