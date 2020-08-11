#include<stdio.h>
#include<stdlib.h>

int a = 1;

int main()
{
    static int b = 2;
    int c = 3;
    int *p = (int*)malloc(sizeof(int));
    p = &a;
    printf("the value of a is:%d\n", *p);
    p = &b;
    printf("the value of b is:%d\n", *p);
    p = &c;
    printf("the value of c is:%d\n", *p);
    
    free(p); 
}
