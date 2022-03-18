# include <stdio.h>


int main() {
    // 输入大写字母，输出小写字母及 ascii 码
    int c1, c2;
    c1 = getchar();
    printf("[ INPUT  ]%c -> %d\n", c1, c1);

    c2 = c1 + 32;
    printf("[ OUTPUT ]%c -> %d\n", c2, c2);
    
    /*
        [ INPUT  ]Z -> 90
        [ OUTPUT ]z -> 122
    */
}
