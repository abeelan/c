# include <stdio.h>


int main() {
    // 数组反转
    int a[5] = {1, 2, 3, 4, 5};
    int i, j, temp;

    for (i = 0; i < 5 / 2; i++) {
        temp = a[i];
        a[i] = a[5 - i - 1];
        a[5 - i - 1] = temp;
    }

    for (i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }
    
    return 0;
}
