#include <stdio.h>

int main(void)
{
    int a,b;
    char op; //op = operation
    printf("첫번째 수:");
    scanf("%d", &a); 
    //scanf 로 받을 땐 &를 붙여서 받음.
    //선언된 기억공간의 이름(변수명) 앞에 &를 붙인다.
    printf("두번째 수:");
    scanf("%d", &b); 

    printf("연산자? +,-,*,/:");
    scanf("%c", &op); 

    if(op == '+') //문자열은 작은 따옴표
        printf("%d + %d = %d 입니다.\n", a, b, a+b);
    else if(op == '-')
        printf("%d - %d = %d 입니다.\n", a, b, a-b);
    else if(op == '*') 
        printf("%d * %d = %d 입니다.\n", a, b, a*b);
    else if(op == '/') 
        printf("%d / %d = %f 입니다.\n", a, b, a/(float)b);
        //변수 선언할 때가 아닌 괄호를 열고 바꿔줄 수 있음.
    else printf("잘못된 연산자가 입력되었습니다.");

    return 0;
}