# include <stdio.h>

/*
数组：具有相同数据类型的一组有序数据的集合。

一维数组
    数据类型 数组名[常量表达式];
    int a[6]; 

    c 语言对数组越界不做检查，需要注意。
*/


void gen_array() {
    int i, a[10];
    // 正序赋值
    for (i = 0; i < 10; i++) {
        a[i] = i;
        printf("%d\t", a[i]);
    }
    printf("\n");
    // 倒序输出
    for (i = 9; i >= 0; i--) {
        printf("%d\t", a[i]);
    }
    /*
    0	1	2	3	4	5	6	7	8	9	
    9	8	7	6	5	4	3	2	1	0	
    */
}

void demo() {
    int a[4] = {1, 2, 3, 4};  // 给全部元素赋值
    int b[4] = {2, 3};  // 给部分元素赋值，不能省略数组长度说明；其他值自动为 0
    // int c[4] = {1, 2, 3, 4, 5};  // 不能超过长度4，编译会报错
    int d[] = {1, 2, 3, 4};  // 给全部元素赋值时，可以省略数组长度说明，由赋值的个数决定

    int e[3] = {0, 0, 0};  // 全部元素值为 0
    int f[3] = {0};  // 全部元素值为 0，写法二
}

void fibonacci() {
    // 用数组来处理斐波那契数列问题;前两个数之和等于第三个数
    int i;
    int f[20] = {1, 1};

    for (i = 2; i < 20; i++) {
        f[i] = f[i-2] + f[i-1];
    }

    // 每五个数换行打印
    for (i = 0; i < 20; i++) {
        if (i % 5 == 0) {
            printf("\n");
        }
        printf("%5d", f[i]);
    }
}

/*
二维数组
    数据类型符 数组名[行长度][列长度];
    二维数组的元素个数 = 行长度 * 列长度 
*/
void two_array() {
    // 将二维数组行列元素互换，存到另一个数组中
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2], i, j;

    printf("array a:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }

    printf("array b:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }
}

/*
字符数组
*/

void char_array() {
    char boy[10] = {'I', ' ', 'a', 'm', ' ', 'a', ' ', 'b', 'o', 'y'};
    int i;

    for (i=0; i<10; i++) {
        printf("%c", boy[i]);
    }

    printf("\n");
}

// 字符的输入和输出; scanf 不用加地址符；输入遇到空格或回车自动结束，不够长度的自动补 \0
void char_array_io() {
    char str[5];
    scanf("%s", str);
    printf("%s", str);
}

int main() {
    printf("\n--- 一维数组 ---\n");
    gen_array();
    demo();
    fibonacci();
    printf("\n--- 二维数组 ---\n");
    two_array();
    printf("\n--- 字符数组 ---\n");
    char_array();
    return 0;
}



