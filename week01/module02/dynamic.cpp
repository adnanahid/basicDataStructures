#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    arr.push_back(10);
    cout << arr.size() << " " << arr.capacity();

    return 0;
}