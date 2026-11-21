#include <stdio.h>

int main() {
    double celsius;
    double ans[2];
    scanf("%lf", &celsius);
    ans[0] = celsius + 273.15;
    ans[1] = celsius * 1.80 + 32.00;
    printf("%.5lf %.5lf\n", ans[0], ans[1]);
    return 0;
}
