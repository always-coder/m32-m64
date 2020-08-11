#include<stdio.h>

typedef struct student{
    int a;
    int b;
}stu;

typedef stu stus[2][3];

int main()
{
        stus arr2d;
        printf("%d\n", sizeof(arr2d));
        return 0;
}
