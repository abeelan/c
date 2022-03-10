# include <stdio.h>

/* 
指针: 是一种数据类型，是存放数据的内存单元的地址。
前面有 * 号代表是一个指针变量、指针数组、指针函数。

取地址运算符 &
&a -> 代表 a 的地址
&a[10] -> 必须是已经定义的变量或数组元素，不能是数组名，不能是 &a

指针运算符 *
取指针变量所指向地址中的内容，与 & 是互逆的
*/


int main() {
    void practice(void);
    void demo(void);
    void example(void);
    void example1(void);

    practice();
    demo();
    example();
    example1();
}

void pointer() {
    
    int i;
    int *p = &i;  // 把 i 的地址赋值给 p；i 必须先定义，且两者数据类型必须一致

    int *q = p;  // p 是指针变量，p 就存的是地址，所以 p 不需要地址符

    // int i;  // 默认是 auto 类型的变量
    // static int *p = &i;  // 不能用 auto 变量的地址符去初始化 static 型指针

    /*
    注意：
        定义时：指针变量必须带 * 
        使用时：不带 * 代表地址，带 * 代表实际值
    */
}

void practice() {
    int i, j;
    int *p1, *p2;  // 初始化指针变量

    p1 = &i;  // p1 不带 * ，代表地址
    p2 = &j;  // p2 不带 * ，代表地址

    i = 3; 
    j = 4;
    printf("i=%d; j=%d\n", i, j);  // i=3; j=4

    *p1 = 5;  // 带 * 为该地址内存储的值
    *p2 = 6;
    printf("i=%d; j=%d\n", i, j);  // i=5; j=6
}

void demo() {
    int i = 5, j, k, l, a[5], *p1, *p2, *p3;

    p1 = &i;
    j = *p1;  // 5

    p2 = &a[1];
    k = *p2;  // a 第二个元素的值 a[1]

    p3 = a;  // 数组名本来就是数组的首个元素的地址，所以不需要再加 & 地址符
    // p3 = &a[0];  // 等同于上面
    l = *p3;  // a 第一个元素的值 a[0]
}

void example(){
    // 通过指针变量访问整型变量
    int a, b, *p1, *p2;
    a = 100;
    b = 10;
    p1 = &a;
    p2 = &b;

    // %x 代表 16 进制的占位符
    printf("example ==> \n");
    printf("a=%d, b=%d\n", a, b);  // a=100, b=10
    printf("*p1=%d, *p2=%d\n", *p1, *p2);  // p1=100, p2=10
    printf("&a=%x, &b=%x\n", p1, p2);  // &a=e32750fc, &b=e32750f8
    printf("p1=%x, p2=%x\n", p1, p2);  // p1=e32750fc, p2=e32750f8
    printf("&p1=%x, &p2=%x\n", &p1, &p2);  // &p1=e32750f0, &p2=e32750e8；指针变量也是变量，通过 & 地址符也是取地址
}

void example1() {
    // 将数从大到小输出
    void swap(int *p1, int *p2);
    int *p1, *p2;
    int a = 6, b = 2;

    p1 = &a;
    p2 = &b;

    if (a > b) {
        swap(p1, p2);  // 址传递
    }

    printf("==> %d ==> %d\n", a, b);
}

void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;  // 这里的值为址传递过来的值
    *p1 = *p2;
    *p2 = temp;
}