#include <stdio.h>
int main() {
    int x, y, s = 1, a[10] = {};
    scanf("%d%d", &x, &y);
    while (x > 0) {
        s = s * 2011 % 100000;  //每次都取余就不会爆了
        x--;
    }
    int i = 1;
    while (y > 0) {
        a[i] = s % 10;  //从1到y个数组存最后y位数
        s = s / 10;
        i++;  //每次累加数组
        y--;
    }
    for (int j = i - 1; j >= 1; j--)  // i-1是因为上一个while语句最后还加了一个1，多加了。
        printf("%d", a[j]);           //要注意贮存顺序
    return 0;
}