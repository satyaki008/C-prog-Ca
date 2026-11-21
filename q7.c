#include <stdio.h>

int main() {
    int n, i, ans = 0;
    int nums[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        int temp = nums[i];
        int count = 0;
        if (temp == 0) {
            count = 1;
        }
        while (temp > 0) {
            count++;
            temp /= 10;
        }
        if (count % 2 == 0) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
