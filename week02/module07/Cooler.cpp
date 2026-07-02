#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    
    while(t--){
        int ctemp, ttemp; cin >> ctemp >> ttemp;    

        int sum = 0;
        for(int i = ctemp; i > ttemp; i--)
            sum += i;

        cout << sum << "\n";    
    }

    return 0;
}