#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 256;

int main() {
    string s;
    while (getline(cin, s)) {
        int count[MAX_CHAR] = {0};

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                count[s[i]]++;
            }
        }

        for (int i = 0; i < MAX_CHAR; i++) {
            while (count[i]--) {
                cout << char(i);
            }
        }
        cout << endl;
    }

    return 0;
}