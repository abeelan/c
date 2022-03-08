# include <stdio.h>

int main() {
    int max(int x, int y);
    int a, b, c;
    a = 20;
    b = 8;
    c = max(a, b);
    printf("==> %d", c);
    return 0;
}

int max(int x, int y) {
    // 比较两数大小，取大数
    int z;
    z = x > y ? x : y;
    return z;
}