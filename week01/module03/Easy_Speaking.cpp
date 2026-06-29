#include <bits/stdc++.h>
using namespace std;

bool isConsonant(char c) {
    return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string theWord;
        cin >> theWord;

        bool contiguous = false;

        for (int i = 0; i <= n - 4; i++) {
            if (isConsonant(theWord[i]) &&
                isConsonant(theWord[i + 1]) &&
                isConsonant(theWord[i + 2]) &&
                isConsonant(theWord[i + 3])) {
                contiguous = true;
                break;
            }
        }

        if (contiguous) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}