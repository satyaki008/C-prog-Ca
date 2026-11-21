#include <stdio.h>

int main() {
    int n, i, pos = 0;
    int nums[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }
    while (pos < n) {
        nums[pos] = 0;
        pos++;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
