#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) {
    int y = 100;
    p = &y;
    cout << p << endl;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 10;
    int *p = &x;
    fun(p);
    cout << p << endl;
    return 0;
}