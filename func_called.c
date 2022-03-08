# include <stdio.h>

// 函数调用量练习


int main() {
    void demo1(void);
    void demo2(void);
    
    demo1();  // 求两数的平方之和
    demo2();  // 求三个数中最大数和最小数的差值
    return 0;
}

void demo1() {
    // 函数调用之前先声明
    int sum_square(int x, int y);
    int a, b;
    a = 2;
    b = 10;

    printf("%d 与 %d 的平方和等于：%d\n", a, b, sum_square(a, b));
}

int sum_square(int x, int y) {
    // 求两数的平方之和
    int square(int x);
    return (square(x) + square(y));
    
}

int square(int x) {
    // 求平方
    return (x * x);
}

/* ----- */
void demo2() {
    int a, b, c, d;
    int dif(int x, int y, int z);

    a = 10;
    b = 5;
    c = 18;

    d = dif(a, b, c);
    printf("%d\n", d);

}

int dif(int x, int y, int z) {
    int max(int x, int y, int z);
    int min(int x, int y, int z);
    int max_num, min_num;

    max_num = max(x, y, z);
    min_num = min(x, y, z);
    printf("Max(%d) - Min(%d) = ", max_num, min_num);
    return (max_num - min_num);
}

int max(int x, int y, int z) {
    int m;
    
    m = x > y ? x : y;
    return (m > z ? m : z);
}

int min(int x, int y, int z) {
    int m;

    m = x < y ? x : y;
    return (m < z ? m : z);
}

