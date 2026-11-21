#include <stdio.h>

int main() {
    int m, n, i, j;
    int accounts[100][100];
    int maxWealth = 0;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        int currentWealth = 0;
        for (j = 0; j < n; j++) {
            scanf("%d", &accounts[i][j]);
            currentWealth += accounts[i][j];
        }
        if (currentWealth > maxWealth) {
            maxWealth = currentWealth;
        }
    }
    printf("%d\n", maxWealth);
    return 0;
}
