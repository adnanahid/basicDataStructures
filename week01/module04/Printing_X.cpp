// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for (int row = 0; row < n; row++) {
//         for (int col = 0; col < n; col++) {
//             if (row == n / 2 && col == n / 2) {
//                 cout << "X";
//             } else if (row == col) {
//                 cout << "\\";
//             } else if (row + col == n - 1) {
//                 cout << "/";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << '\n';
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // Optimize standard I/O operations for speed
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     // 1. Top half of the X
//     for (int row = 1; row <= n / 2; row++) {
//         int pos1 = row;         // Position of '\'
//         int pos2 = n - row + 1; // Position of '/'

//         cout << string(pos1 - 1, ' ') << "\\"
//              << string(pos2 - pos1 - 1, ' ') << "/\n";
//     }

//     // 2. Middle intersection
//     cout << string(n / 2, ' ') << "X\n";

//     // 3. Bottom half of the X
//     for (int row = n / 2; row >= 1; row--) {
//         int pos1 = row;         // Position of '/'
//         int pos2 = n - row + 1; // Position of '\'

//         cout << string(pos1 - 1, ' ') << "/"
//              << string(pos2 - pos1 - 1, ' ') << "\\\n";
//     }

//     return 0;
// }