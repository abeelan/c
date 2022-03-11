# include <stdio.h>

/*
    指针和函数

    数组名作为函数参数：
        数组名作为函数形参时，接受实参数组的首地址
        数组名作为函数实参时，将数组的首地址传递给形参数组
    
    引入指向数组的指针变量后，数组及指向数组的指针变量作为函数参数时，有四种等价形式：
        1、形参、实参均为数组名
        2、形参、实参均为指针变量
        3、形参是指针变量，实参时数组名
        4、形参是数组名，实参是指针变量
    都属于地址传递。

    难点：
        1、看主函数的声明，形参 = 声明；
        2、看调用函数前的重新赋值，如果重新赋值，则实参是指针，否则用数组
        3、指针对指针；数组对数组

    指针型函数的定义，需要在函数名前面加一个 * 号，表示函数的返回值是个指针型数据。
    只能使用指针变量或指针数组元素接收指针型函数的返回值，不能使用数组名接收。
    因为函数名是地址常量，不是地址型变量，不能接收地址型变量数据。

*/

int main() {
    void example(void);

    example();
}


void example() {
    // 将数组中 n 个整数按相反顺序存放。
    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    void inv(int x[], int n);

    printf("The original array：\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    void inv_array(int x[], int n);
    void inv_pointer(int *x, int n);

    // 形参和实参都是数组名
    inv_array(a, 10);

    // 实参是数组，形参是指针变量
    inv_pointer(a, 10);

    // 实参与形参均用指针变量
    int *p = a;  // 把数组首地址赋值给指针变量
    inv_pointer(p, 10);

    // 实参是指针变量，形参是数组
    int *q = a;
    inv_array(q, 10);

    printf("The array has been inverted：\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void inv_array(int x[], int n) {
    int temp, i, j, m = n / 2;
        
    for (i = 0; i < m; i++) {
        j = n - 1 - i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    return;
}

void inv_pointer(int *x, int n) {
    int *i, *j, *c, temp;

    i = x;
    j = x + n - 1;
    c = x + n / 2;  // n/2 得到中间值，相当于取到中间值的地址

    // 当前地址小于中间地址，则继续循环；由于 i 的地址是第 0 个元素，也就是从 0 开始循环，所以 i < c，不能等于 c
    for (; i < c; i++, j--) {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}