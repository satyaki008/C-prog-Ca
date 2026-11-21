#include <stdio.h>

int main() {
    char s[1000], filtered[1000];
    int i, len = 0, isPal = 1;
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            filtered[len++] = s[i] + 32;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            filtered[len++] = s[i];
        }
    }
    int left = 0, right = len - 1;
    while (left < right) {
        if (filtered[left] != filtered[right]) {
            isPal = 0;
            break;
        }
        left++;
        right--;
    }
    if (isPal == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
