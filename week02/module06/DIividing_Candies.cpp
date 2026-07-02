// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t; 
//     cin >> t;
    
//     while(t--){
//         int n, x; cin >> n >> x;

//         int max_candies = 0;
//         for(int i = 0; i < n; i++){
//             int candies;
//             cin >> candies;

//             if(candies % x == 0)
//                 max_candies = max(max_candies, candies);

//         }

//         cout << max_candies << "\n";

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,x; 
        cin >> n >> x;

        vector<int> a(n);
        for(auto &v : a) 
            cin >> v;

        int best=0;
        for(int v : a) 
            if(v % x == 0) 
                best = max(best,v);

        cout << best << "\n";
    }
}