# include <stdio.h>

/*

for (表达式1; 表达式2; 表达式3) 语句;

表达式1：变量赋初值
表达式2：控制循环的条件，非 0 则执行表达式3，否则跳出循环
表达式3：循环后修正变量，带入表达式2判断

表达式123都可以省略，但是分号不能省略，当 2 省略时，陷入无限循环 -> for (;;) 
*/


// 求 1-100 的累加和
void sum_100() {
    int i, sum = 0;
    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);
}

void sum_1() {
    int i, sum = 0;
    i = 1;
    for (; i <= 100; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);
}

void sum_2() {
    int i, sum = 0;
    for (i = 1; i <= 100; ) {
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);
}

void sum_3() {
    int i, sum = 0;
    i = 1;
    for (; i <= 100; ) {
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);
}

// 省略表达式

int main() {
    sum_100();  // 正常形式
    sum_1();  // 省略表达式 1
    sum_2();  // 省略表达式 3 
    sum_3();  // 省略表达式 1 3
    return 0;
}