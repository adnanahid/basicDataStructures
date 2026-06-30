#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5] = {1, 3, 5, 7, 9};
    for (int i = 0; i < 5; i++)
        cout << (uintptr_t)&arr[i] << endl;

    return 0;
}