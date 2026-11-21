#include <stdio.h>

int main() {
    int n, i;
    int nums[1000], ans[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    ans[0] = 1;
    for (i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int right = 1;
    for (i = n - 1; i >= 0; i--) {
        ans[i] = ans[i] * right;
        right = right * nums[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}
