#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> A.at(i).at(j);
    }

    int64_t score_max = 0LL;
    for (int i = 0; i < M - 1; i++) {
        for (int j = i + 1; j < M; j++) {
            int64_t score_new = 0LL;
            for (int k = 0; k < N; k++) {
                score_new += max(A.at(k).at(i), A.at(k).at(j));
            }
            score_max = max(score_max, score_new);
        }
    }
    cout << score_max << endl;
}