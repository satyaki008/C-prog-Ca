#include <stdio.h>

int main() {
    int n, i, j, found = 0;
    int nums[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }
    if (found == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
