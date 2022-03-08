# include <stdio.h>

/*
break 只能作用于 switch 和 循环语句 中，终止并跳出循环体或开关体
continue 只能用于 while、do-while、for 循环语句，立即结束本次循环，转去判断循环条件是否成立 
*/


// 实现小写字符转换大写字母，当输入非字母类型时，终止循环
void test_break() {
    char c;
    while (1) {
        c = getchar();
        if (c >= 'a' && c <= 'z') {
            printf("%c -> %c\n", c, c - 32);
        }
        else if (c >= 'A' && c <= 'Z') {
            printf("输入字母为大写，无需转换 -> %c\n", c);
        }
        else {
            printf("输入非字母，循环结束！\n");
            break;
        }
    }
} 

// 输出 100-200 之前不能被 3 整除的数
void test_continue() {
    int i;
    for (i = 100; i <= 200; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("i -> %d\n", i);
    }
}

int main() {
    // test_break();
    test_continue();
    return 0;
}