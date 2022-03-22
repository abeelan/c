# include <stdio.h>

/*
    单链表
*/

typedef struct {
    int id;
    char name[10];
} DataType;

typedef struct node {
    DataType data;  // 数据域
    struct note *next;  // 指针域，存放该结点的直接后继结点的地址
} Node, LinkList;


LinkList init() {
    // 创建一个空的单链表
    LinkList head;  // 头指针
    head = malloc(sizeof(Node));  // 动态构建结点，作为头结点
    head -> next = NULL;
    return head;
}

int length(LinkList head) {
    Node *p;
    p = head;
    j = 0;

    while (p -> next != NULL) {
        p = p -> next;  // p 为下一个节点的指针
        j++;
    }
    return j;
} 

Node *getLinkList(LinkList head, int i) {
    // 获取第 i 个结点
    Node *p;
    p = head -> next;
    int c = 1;

    while (c < i && p != NULL)
    {
        p = p -> next;
        c++;
    }

    if (c == i) {
        return p;
    } else {
        return NULL;
    }
}

// 删除结点
// p -> next = p -> next -> next;


int locate(LinkList head, DataType x) {
    // 定位算法,查找数据 x 的位置
    Node *p = head;
    p = p -> next;
    int i = 1;

    while (p != NULL && p -> data != x) {
        i++;
        p = p -> next;
    }

    if (p != NULL) {
        return i;
    } else {
        return 0;
    }
} 


