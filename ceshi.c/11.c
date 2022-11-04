#include <stdio.h>
int a[10000];
int main() {
    int n, i, j, k = 1, c;
    int x, y, z, sum;
    scanf("%d", &n);
    k = 1;
    for (i = 0; i < n; i++) {
        a[i] = 1;
    }
    for (;;) {
        y = 0;
        x = 0;
        sum = 0;
        if (k % 2 == 1) {
            for (j = 0; j < n; j++) {
                if (a[j] == 1)
                    y++;
                if (y % 3 == 0)
                    a[j] = 0;
            }
            k++;
        } else {
            for (j = n - 1; j >= 0; j--) {
                if (a[j] == 1)
                    x++;
                if (x % 3 == 0)
                    a[j] = 0;
            }
            k++;
        }
        for (j = 0; j < n; j++) {
            if (a[j] == 1)
                sum++;
        }

        if (sum < 3)
            break;
    }
    if (k % 2 == 1) {
        for (c = 0; c < n; c++) {
            if (a[c] == 1)
                break;
        }
    }
    if (k % 2 == 0) {
        for (c = n - 1; c >= 0; c--) {
            if (a[c] == 1)
                break;
        }
    }
    printf("%d", c + 1);

    return 0;
}
