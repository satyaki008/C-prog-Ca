#include <stdio.h>

int main() {
    int n, i;
    int nums[1000], ans[2000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}
