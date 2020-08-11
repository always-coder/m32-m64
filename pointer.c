#include<stdio.h>

int main()
{
    int num = 0;
    int *pi = &num;

    printf("Address of num: %x Value: %d\n", &num, num);
    printf("Address of pi: %p Value: %p\n", &pi, pi);
}

