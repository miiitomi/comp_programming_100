#include <bits/stdc++.h>
using namespace std;

void f(int n, int x) {
    int ans = 0;
    
    for (int i = 1; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            for (int k = j + 1; k <= n; k++) {
                if (i + j + k == x) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}

int main() {
    while (true) {
        int n, x;
        cin >> n >> x;
        if (n == 0 && x == 0) {
            break;
        }
        f(n, x);
    }
}
