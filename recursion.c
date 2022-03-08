# include <stdio.h>


// 递归
// 第五个人比第四个人大 2 岁，第四个人比第三个人大两岁 ... 第一个人 10 岁，第五个人多大？


int age(int n) {
    if (n == 1) {
        return 10;
    }

    return (2 + age(n - 1));
}

int main() {
    int age(int n);
    printf("%d\n", age(5));
    return 0;
}