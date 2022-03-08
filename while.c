#include <stdio.h>


// while -> 当表达式成立的时候，才会执行，表达式不成立时，最少执行 0 次。
void while_sum() {
    int i, sum;
    i = 1;
    sum = 0;

    while (i <= 100) {
        sum += i;
        i++;
    }

    printf("sum = %d\n", sum);
}

// while 语句显示 1-10 的平方
void while_square() {
    int i = 1; 
    while (i <= 10) {
        printf("%d * %d = %d\n", i, i, i*i);
        i++;
    }
}

// do while 先执行一次，再做判断，最少执行 1 次。
void do_while_sum() {
    int i, sum = 0;
    i = 1;
    do {
        sum += i;
        i++;
    }
    while (i <= 100);
    printf("sum = %d\n", sum);
}

int main() {
    while_sum();
    printf("-----\n");
    while_square();
    printf("-----\n");
    do_while_sum();
    return 0;
}


