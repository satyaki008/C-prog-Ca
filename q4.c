#include <stdio.h>

int main() {
    int n, i;
    int nums[1000], runningSum[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    runningSum[0] = nums[0];
    for (i = 1; i < n; i++) {
        runningSum[i] = runningSum[i - 1] + nums[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", runningSum[i]);
    }
    printf("\n");
    return 0;
}
