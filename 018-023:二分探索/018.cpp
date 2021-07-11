// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=ja

#include <bits/stdc++.h>
using namespace std;

bool f(int x, vector<int> &S) {
    int left = -1;
    int right = S.size();
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (S[mid] >= x) right = mid;
        else left = mid;
    }
    if (right < S.size()) {
        if (S[right] == x) return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    int Q;
    cin >> Q;
    vector<int> T(Q);
    for (int q = 0; q < Q; q++) cin >> T[q];

    sort(S.begin(), S.end());
    int ans = 0;
    for (int i = 0; i < Q; i++) {
        ans += f(T[i], S);
    }
    cout << ans << endl;
}
