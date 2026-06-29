#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<long long> &arr, long long n, long long target) {
    long long left = 0;
    long long right = n - 1;
    while (left <= right) {
        long long middle = (left + right) / 2;
        if (target == arr[middle])
            return 1;
        else if (target > arr[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }
    return 0;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    // long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    // sort(arr, arr + n);

    long long target;

    while (q--) {
        cin >> target;

        if (binarySearch(arr, n, target))
            cout << "found" << '\n';
        else
            cout << "not found" << '\n';
    }

    return 0;
}