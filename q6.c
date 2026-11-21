#include <stdio.h>

int main() {
    int n, i, j;
    int nums[1000], ans[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }
        ans[i] = count;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}
