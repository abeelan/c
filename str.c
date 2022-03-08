# include <stdio.h>
# include <string.h>

void strcmp_demo() {
    // 字符串相等不能直接用 == 比较
    strcmp("a", "ab");

    if (strcmp("a", "ab") == 0) {
        // str1 == str2 -> 0
        // str1 > str2 -> 正整数
        // str1 < str2 -> 负整数
        printf("yes");
    }

    // demo
    char str1[] = {"wuhan"};
    char str2[] = {"beijing"};
    int r1, r2, r3;

    r1 = strcmp(str1, str2);
    r2 = strcmp("china", "korea");
    r3 = strcmp(str2, "beijing");

    // r1=21; r2=-1; r3=0
    // todo: r2 为啥不是两个字符串首字母ASCII码值相减 -8，而是 -1
    printf("r1=%d; r2=%d; r3=%d\n", r1, r2, r3);
}

void strcpy_demo() {
    // 有三个字符串，找出其中最大者
    char max[10], str[3][10];
    int i;

    for (i = 0; i < 3; i++) {
        gets(str[i]);
        printf("输入第%d个字符串为：%s\n", i, str[i]);
    }

    if (strcmp(str[0], str[1]) > 0) {
        strcpy(max, str[0]);
    } else {
        strcpy(max, str[1]);
    }

    if (strcmp(str[2], max) > 0) {
        strcpy(max, str[2]);
    }

    printf("最大字符串为：%s\n", max);
}

void strcat_demo() {
    // 字符串连接
    char str1[30] = {"I am "};
    char str2[] = {"a boy"};
    
    printf("%s\n", strcat(str1, str2));
}

void strlen_demo() {
    // strlen() 返回字符串实际长度
    char str[] = {"china"};
    printf("%d\n", strlen(str));  // 5
    printf("%d\n", strlen("beijing\0test")); // 7
}

int main() {
    strcmp_demo();
    // strcpy_demo();
    strcat_demo();
    strlen_demo();
    return 0;
} 
