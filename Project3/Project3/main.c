#include <stdio.h>
#include <ctype.h>
#pragma warning(disable: 4996)

int main(void)
{
    /*
       char input;
       printf("Enter a character: ");
       scanf("%c", &input);

       if (isalpha(input)) {
           printf("0\n");
       }
       if (isdigit(input)) {
           printf("1\n");
       }
       return 0;
   */
   /*
       char c;
       printf("Enter a character :\n");
       scanf("%c", &c);

       if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
           printf("1\n");
       else
           printf("0\n");
       printf("ASCII value of %c = %d", c, c);
       return 0;
    */
    //Goal : Input a character to check if it's an alphabet.
    //var, scanf, printf (optional)
    //char ch;
    //printf("Input a character >");
   // scanf("%c", &ch);

    //printf("%c", &ch);
    /*printf("%c\n", ch);
    printf("%d\n", ch);
    printf("%d\n", 'A');*/
    //printf(("%d", ch >= 'A' && ch <= 'Z') || ("%d", ch >= 'a' && ch <= 'z'));

    /*int x = 10;
    x = x + 5;
    x %= 7;
    x++;
    ++x;
    x = x++ + ++x;
    printf("x : %d\n", x);
    
    	srand(time(NULL));
	int dice = rand() % 6 + 1;
	printf("Dice Total : %d", dice);

	double value = (double)rand() / (double)RAND_MAX;
	printf("%17.15f", value);
    
    
    */

    int a, b, c;
    printf("type in three separate numbers >");
    scanf("%d %d %d", &a, &b, &c);
    float avg = (float)(a + b + c) / 3.0f;
    printf("%f", avg);

    return 0;

    //1. ������ ��ȣ�� �Ǵ� ("���", "����", "0")
    //2. ������ ���� �������� 3�� ����̸鼭 5�� ������� �Ǵ�
    //3. ���� ������ �������� �ִ밪 ���
    //4. �ΰ��� ������ ���̸� �׻� ����� ǥ��
    //ex) 10 30 >>> 20 // 30 10 >>> 20
    //5. �� ������ ���� ��ȯ
}