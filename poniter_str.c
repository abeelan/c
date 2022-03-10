# include <stdio.h>


/*
    指针和字符串

    定义时赋值：
        char *s = "abcd";
    程序中赋值：
        char *s;
        s = "abcd";
    
    并不是将字符串赋值给指针变量，而是将存放字符串的连续内存单元的首地址赋值给指针变量

    字符指针和字符数组的区别
        
        - 存储内容不同；
        - 赋值方式不同；字符指针直接赋值，字符数组需要挨个元素进行赋值；
        - 字符指针变量在定义后要先赋值才能引用；
        - 指针变量的值是可以改变的，字符指针变量也不例外；而数组名代表数组的首地址，是一个常量，常量是不能改变的。
*/

void basic() {
    char *string = "I Love China.";

    // 直接输出
    printf("%s\n", string);
    printf("%s\n", string + 7);  // 从第 7 个字符输出到完！ China.
    puts(string + 7);

    // 使用指针变量处理字符串中单个字符
    for (; *string != '\0'; string++) {
        printf("%c", *string);  // *string 代表各指针地址的内容，指针在 +1 过程中会一直输出，知道遇到 \0
    }
    printf("\n");
}

void example() {
    // 用下标法存取字符串中的字符
    // 将字符串 a 复制为字符串 b
    char a[] = "I am a boy!", b[20];
    int i;

    for (i = 0; *(a + i) != '\0'; i++) {
        *(b + i) = *(a + i);
    }
    *(b + i) = '\0';  // 手动按字符赋值字符串数组，需要手动添加 \0

    printf("%s\n", a);
    printf("%s\n", b);

    for (i = 0; b[i] != '\0'; i++) {
        printf("%c", b[i]);
    }
    printf("\n");
}


int main() {
    void basic(void);
    void example(void);

    basic();
    example();

    return 0;
}