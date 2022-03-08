# include <stdio.h>

// 常用库函数练习

int main() {

    // 求绝对值
    int abs(int x);
    long labs(long x);
    // double fabs(double, x);

    printf("%d\n", abs(-4));  // 求绝对值 4
    printf("%ld\n", labs(-4567890123));  // 长整型 求绝对值
    // printf("%f\n", fabs(-4.567890123));  // 实型 求绝对值 为什么输出不对？
    
    printf("--------\n");

    // 计算小于或等于 x 的最大整数对应的双精度实数
    double floor(double x);
    double ceil(double x);

    printf("%f\n", floor(3.1415926));  // 3.000000
    printf("%f\n", ceil(3.1415926));   // 4.000000
    printf("%f\n", floor(-3.1415926));   // -4.000000
    printf("%f\n", ceil(-3.1415926));   // -3.000000

    printf("--------\n");

    // 求平方根
    double sqrt(double x);
    printf("%f", sqrt(4));

    printf("--------\n");

    // 计算常用对数
    double log10(double x);  // 返回常用对数 log 以 10 为底（x） 的值；x > 0
    double log(double x);  // 返回自然对数 ln（x） 的值; x > 0

    // 计算指数函数
    double exp(double x);  // 返回 e 的 x 次幂的值
    double pow10(double x);  // 返回 10 的 x 次幂的值
    double pow(double x, double y);  // 返回 x 的 y 次方的值

    // 计算弦函数
    double sin(double x);  // 返回正弦函数 sin(x) 的值
    double cos(double x);  // 返回余弦函数 cos(x) 的值
    double tan(double x);  // 返回正切函数 tan(x) 的值

    printf("--------\n");

    // 字符串转换浮点数函数
    double atof(char *x);  // 返回 x 所指向的字符串转换成的实数
    double atoi(char *x);  // 返回 x 所指向的字符串转换成的整数

    printf("%f\n", atof("1.123AB"));  // 小数点后面的字母直接省略 1.123000
    printf("%f\n", atoi("1.123AB"));  // 小数点后面的直接省略 1.000000

    printf("--------\n");

    // 判断是否字母
    int isalpha(int x);
    printf("%d\n", isalpha(15));  // 0
    printf("%d\n", isalpha('C'));  // 1  用单引号可以，双引号不行

    printf("--------\n");

    // 判断是否大小写字母
    int islower(int x);
    printf("%d\n", islower(65));  // 0
    printf("%d\n", islower(97));  // 1

    int isupper(int x);
    printf("%d\n", isupper(65));  // 1
    printf("%d\n", isupper(97));  // 0

    printf("--------\n");

    // 判断是否数字
    int isdigit(int x);
    printf("%d\n", isdigit(49));  // 1 ascii 映射表 48 -> 0
    printf("%d\n", isdigit(67));  // 0
    
    printf("--------\n");

    // 大小写字母转换
    int tolower(int x);
    int toupper(int x);

    printf("%d\n", tolower(65));  // 65(A) -> 97(a)
    printf("%d\n", toupper(97));  // 97(a) -> 65(A)
} 