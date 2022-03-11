# include <stdio.h>

// struct ..


void def() {
    // 自定义类型; 定义别名
    float a;
    typedef float REAL;
    REAL x = 1.2;
    printf("%f", x);

    typedef int ARRAY[10];  // 定义 ARRAY 为整型、长度为 10 的数组用户类型符
    ARRAY a, b, c;  // 等价于下面
    // int a[10], b[10], c[10];
}

int main() {
    def();
    
    return 0;
}