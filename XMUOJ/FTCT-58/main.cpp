#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> freq;
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        freq[A]++;
        freq[B]++;
    }
    int pairs = 0;
    for (auto& kv : freq) {
        pairs += kv.second / 2;
    }
    if (pairs >= N / 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}