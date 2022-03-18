# include <stdio.h>
# include <string.h>
# include <math.h>

/*
    选择排序实现
*/


int main() {
    int a[5] = {5, 8, 2, 9, 6};
    void sort(int array[], int len);
    int i;

    sort(a, 5);

    for (i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}

void sort(int a[], int len) {
    // 找到最小值，并与当前的数进行替换
    int i, j, pos, temp;

    for (i = 0; i < len - 1; i++) {
        pos = i;

        // i 与后面所有的数进行比较，找到最小值就覆盖掉，然后与 i 进行替换
        for (j = i + 1; j < len; j++) {
            if (a[j] < a[pos]) {
                pos = j;  // 重新赋值最小值
            }
        }
        // pos 为最小值的下标
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
}

