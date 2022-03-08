#include <stdio.h>

// TODO：mac vscode 输入调试不会配置，暂不支持用户输入字符调试。

// 1、单分支结构
void if_1()
{
    int x, y;
    x=30;
    y=10;
    if (x>y)
    {
        printf("%d\n", x);
    }
}

// 如果if后面是复合语句的话，必须要加大括号；两数比较，输出小数在前，大数在后
void if_2()
{
    float a, b, t;
    a=3.2;
    b=1.3;

    if (a>b) 
    {
        t=a; a=b; b=t;
    }
    printf("%f < %f\n", a, b);
}

// 2、双分支 if-else; 判断输入的两个数字是否相等
void if_else()
{
    int x=10, y=20;
    printf("请输入第一个数字：%d\n", x);
    // scanf("%d", &x);
    printf("请输入第二个数字：%d\n", y);
    // scanf("%d", &y);
    if (x==y)
        printf("x==y\n");
    else
        printf("x!=y\n");
}

// 3、分支嵌套；判断字符输入种类
void if_else_if()
{
    char c;
    printf("please input char:");
    // c=getchar();
    c='9';
    if (c<32)
        printf("这是一个控制字符！");
    else if (c >= '0' && c<= '9')
        printf("这是一个数字！");
    else if (c >= 'a' && c <= 'z')
        printf("这是一个小写字母！");
    else if (c >= 'A' && c <= 'Z')
        printf("这是一个大写字母！");
    else
        printf("我不知道这是什么字符！");
}

// 例子：输入三个数，按有小到大的顺序输出
void if_example()
{
    int a, b, c, t;
    a=10;
    b=18;
    c=6;

    if (a>b) 
    {
        t=a; a=b; b=t;
    }
    if (a>c) 
    {
        t=a; a=c; c=t;
    }
    if (b>c) 
    {
        t=b; b=c; c=t;
    }
    printf("\n%d < %d < %d\n", a, b, c);
}

// 4、if 内的 if 嵌套；输入两个数，判断大小关系
void if_if() 
{
    int x=18, y=18;
    if (x != y)
    {
        if (x > y) 
        {
            printf("x > y");
        }
        else
        {
            printf("x < y");
        }
    }
    else 
    {
        printf("x == y");
    }
}

// 条件运算符; 三目运算；输入大写字母转小写字母
void if_3()
{
    char x = 'Z';
    x = (x >= 'A' && x <= 'Z') ? (x + 32) : x;
    printf("\n转换后的结果为：%c", x);
}

int main() 
{
    if_1();
    if_2();
    if_else();
    if_else_if();
    if_example();
    if_if();
    if_3();
    return 0;
}