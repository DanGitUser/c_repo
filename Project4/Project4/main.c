#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#pragma warning(disable: 4996)

int main(void) 
/*3. 정수 새개를 기준으로 최대값 출력
{
    int a, b, c;
    printf("type in three separate numbers >");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d Is the 최대값", a);
    else if (b > a && b > c)
        printf("%d Is the 최대값", b);
    else if (c > a && c > b)
        printf("%d Is the 최대값", c);
}
*/


/* 2. 정수의 값을 기준으로 3의 배수이면서 5의 배수인지 판단
{
    int num;
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        printf("3의 배수이면서 5의 배수이다");
    else
        printf("3의 배수이면서 5의 배수가 아니다");
    return 0;
}
*/

//1. 숫자의 부호를 판단 ("양수", "음수", "0")
{
    int num;
    printf("Enter a number :\n");
    scanf("%d", &num);

    scanf("%d", num = 0);
        printf("Its a 0\n");
    scanf("%d", num >= 1);
        printf("It's a 양수\n");
    scanf("%d", num <= -1);
        printf("It's a 음수\n");
    return 0;
}
