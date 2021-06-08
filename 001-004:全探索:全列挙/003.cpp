#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, string S) {
    string X = "ACGT";
    for (int k = i; k <= j; k++) {
        if (X.find(S.at(k)) == string::npos) {
            return 0;
        }
    }
    return j - i + 1;
}

int main() {
    string S;
    cin >> S;
    int n = S.length();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ans = max(ans, f(i, j, S));
        }
    }
    cout << ans << endl;
}