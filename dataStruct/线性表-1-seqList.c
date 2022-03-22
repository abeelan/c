# include <stdio.h>

// 线性表的顺序表算法；插入、删除、定位

const int MaxSize = 100;

int main() {
    return 0;
}


typedef struct
{
    int id;
    char name[10];
    char sex;
    float score;
} DataType;

typedef struct
{
    DataType data[10];
    int length;
} SeqList;


void insert(SeqList L, DataType x, int n) {
    /* 设表的长度为 n，这里的 n 不是行参 int n 
        一般情况下，需要移动 n-i+1 次
        最坏的情况下，插入队首元素，需要移动 n 次；
        最好的情况下，插入队尾元素，需要移动 0 次；
        平均移动 n/2 次，时间复杂度为 O(n).
    */
    if (L.length == MaxSize) {
        printf("表已满");
        return;
    }

    if (n < 1 || n > L.length + 1) {
        printf("插入位置非法");
        return;
    }

    int i;
    for (i=L.length - 1; i >= n; i--) {
        L.data[i] = L.data[i - 1];
    }
    L.data[n - 1] = x;
    L.length++;
}

void delete(SeqList L, int n) {
    /* 设表的长度为 n，这里的 n 不是行参 int n 
        一般情况下，需要移动 n-1 次
        最坏的情况下，删除队首元素，需要移动 n-1 次；
        最好的情况下，删除队尾元素，需要移动 0 次；
        平均移动 (n-1)/2 次，时间复杂度为 O(n).
    */
    if (n < 1 || n > L.length) {
        printf("非法位置");
        return;
    }

    int i;
    for (i = n; i < L.length; i++) {
        L.data[i - 1] = L.data[i];
    }
    L.length--;
}

int locate(SeqList L, DataType x) {
    // 以参数 x 与表中元素比较，比较的平均时间复杂度为 O(n)
    // 求表长和读表元素算法的时间复杂度是 O(1)
    int i = 0;
    while (i < L.length && L.data[i] != x) {
        i++;
    }
    if (i < L.length) {
        return i + 1;
    } else {
        return 0;
    }
}