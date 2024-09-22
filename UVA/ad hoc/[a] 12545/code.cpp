#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int n;
    char s[200], t[200];

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        cin >> t;

        int lens = strlen(s);
        int lent = strlen(t);

        if(lens != lent) {
            printf("Case %d: -1\n", i);
        }

        int ans = 0, count0t = 0, count1t = 0, count0s = 0, count1s = 0, countqs = 0, mismatch = 0;

        for(int j = 0; s[j]; j++) {
            if(s[j] == '0') {
                count0s += 1;
            } else if (s[j] == '1') {
                count1s += 1;
            } else {
                countqs += 1;
            }

            if(t[j] == '0') {
                count0t += 1;
            } else {
                count1t += 1;
            }

            if(s[j] != t[j]) {
                mismatch += 1;
            }
        }

        // first equalize the number of 0 and 1 bits
        // 0 can be 1 (non symmetric)
        // ? can be 0 or 1
        // first try to use ?
        for (int j=0; s[j]; j++) {
            if (s[j] == '?' && t[j] == '0' && count0s < count0t) {
                s[j] = '0';
                count0s += 1;
                ans += 1;
                mismatch -= 1;
            } else if (s[j] == '?' && t[j] == '1' && count1s < count1t) {
                s[j] = '1';
                count1s += 1;
                ans += 1;
                mismatch -= 1;
            } else if (s[j] == '?' && count0s < count0t) {
                s[j] = '0';
                ans += 1;
                count0s += 1;
            } else if (s[j] == '?' && count1s < count1t) {
                s[j] = '1';
                count1s += 1;
                ans += 1;
            }
        }

        for(int j=0; s[j]; j++) {
            if (s[j] == '0' && t[j] == '1' && count1s < count1t) {
                s[j] = '1';
                count1s += 1;
                count0s -= 1;
                ans += 1;
                mismatch -= 1;
            }
        }

        // we can only swap from this point
        // printf("s: %s\nt: %s\n", s, t);
        // printf("count0s: %d, count1s:%d, count0t:%d, count1t:%d\n", count1s, count0t, count0t, count1t);

        if(count0s == count0t && count1s == count1t) {
            printf("Case %d: %d\n", i, ans + mismatch/2);
        } else {
            printf("Case %d: -1\n", i);
        }
    }

    return 0;
}