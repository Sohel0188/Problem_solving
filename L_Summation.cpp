#include <bits/stdc++.h>
using namespace std;

long long sumArray(vector<int>& A, int N) {
    if (N == 0) return 0;
    return A[N - 1] + sumArray(A, N - 1);
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << sumArray(A, N) << endl;
    return 0;
}