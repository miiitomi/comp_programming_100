#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    int ans = 2*pow(10, 9);
    for (int c = 0; c <= 2*max(X, Y); c += 2) {
        int a = max(0, X - c/2);
        int b = max(0, Y - c/2);
        ans = min(ans, (A * a) + (B * b) + (C * c));
    }
    cout << ans << endl;
}