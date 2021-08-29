#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int main(void)
{
    return 0;
}
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}

int main(void)
{
    int a, b;
    char sign;
    printf("Press whole equation\n");
    scanf("%d%c$d", &a, &sign, &b);
    if(sign == '+')
        printf("%d\n", add(a,b));
}
