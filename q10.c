#include <stdio.h>

int main() {
    int n, i;
    int prices[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    int minPrice = prices[0];
    int maxProfit = 0;
    for (i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    printf("%d\n", maxProfit);
    return 0;
}
