#include <stdio.h>

int balancedStringSplit(char* s) {
    int ans = 0, d = 0;
    for (int i = 0; s[i]; i++) {
        s[i] == 'L' ? ++d : --d;
        if (d == 0) {
            ++ans;
        }
    }
    return ans;
}

