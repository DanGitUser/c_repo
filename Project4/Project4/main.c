#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#pragma warning(disable: 4996)

int main(void) 
/*3. ���� ������ �������� �ִ밪 ���
{
    int a, b, c;
    printf("type in three separate numbers >");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d Is the �ִ밪", a);
    else if (b > a && b > c)
        printf("%d Is the �ִ밪", b);
    else if (c > a && c > b)
        printf("%d Is the �ִ밪", c);
}
*/


/* 2. ������ ���� �������� 3�� ����̸鼭 5�� ������� �Ǵ�
{
    int num;
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        printf("3�� ����̸鼭 5�� ����̴�");
    else
        printf("3�� ����̸鼭 5�� ����� �ƴϴ�");
    return 0;
}
*/

//1. ������ ��ȣ�� �Ǵ� ("���", "����", "0")
{
    int num;
    printf("Enter a number :\n");
    scanf("%d", &num);

    scanf("%d", num = 0);
        printf("Its a 0\n");
    scanf("%d", num >= 1);
        printf("It's a ���\n");
    scanf("%d", num <= -1);
        printf("It's a ����\n");
    return 0;
}
