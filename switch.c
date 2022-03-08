#include <stdio.h>

// case 后可以不加 break，如果不加的话，继续往下执行。

// 根据成绩给定一个级别
void example()
{
    char grade;
    grade = 'D';

    switch (grade) {
        case 'A': {
            printf("85-100");
            break;
        }
        case 'B': {
            printf("70-84");
            break;
        }
        case 'C': {
            printf("60-69");
            break;
        }
        case 'D': {
            printf("<60");
            break;
        }
        default: {
            printf("Error!");
        }
        
    }
}



int main()
{
    example();
    return 0;
}