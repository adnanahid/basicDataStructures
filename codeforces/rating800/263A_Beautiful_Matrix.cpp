// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     vector<vector<int>> mat(5, vector<int>(5));
//     for(auto &row: mat)
//         for(auto &x: row)
//             cin >> x;

//     for (auto &row : mat) {
//         for (auto x : row)
//             cout << x << " ";
//         cout << '\n';
//     }       

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int row, col;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int x; cin >> x;
            if(x == 1){
                row = i; col = j; break;
            }
        }    
    }
    cout << abs(2 - row) + abs(2 - col) << "\n";
    return 0;
}