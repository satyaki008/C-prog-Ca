#include <stdio.h>

int main() {
    int n, i;
    int nums[1000];
    scanf("%d", &n);
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }
    int missing = expectedSum - actualSum;
    printf("%d\n", missing);
    return 0;
}
