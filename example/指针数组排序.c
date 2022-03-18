# include <stdio.h>
# include <string.h>

// 输入三个国家的名称，按字母顺序排序后输出
// input  ==> China    America  Russia
// output ==> America  China	Russia	

int main() {
    char *s[] = {"China", "America", "Russia"}, *p;
    int i, j, k = 3;

    // 控制总循环轮次
    for (i = 0; i < k - 1; i++) {
        // 两两交换，3 个元素需要 两次，也就是 j < 3 - 1 得 0 1 次循环
        for (j = 0; j < k - 1; j++) {
            if (strcmp(s[j], s[j + 1]) > 0) {
                // 把小得字符串往前面放
                p = s[j];
                s[j] = s[j + 1];
                s[j + 1] = p;
            }
        }
    }

    for (i = 0; i < k; i++) {
        printf("%s\t", s[i]);
    }

    return 0;
}
