#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        string theWord; cin >> theWord;
        int len = theWord.length();
        if(len > 10)
            cout << theWord[0] << len - 2 << theWord[len - 1] << "\n";
        else 
            cout << theWord << "\n";
        }

    return 0;
}