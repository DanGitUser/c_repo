#include <stdio.h>
#pragma warning(disable: 4996)

int main() 
{
    /*int Inputnum, n1, n2, n3, sumnum;
    printf("Enter a three digit number: ");
    scanf("%d", &Inputnum);
    n1 = Inputnum / 100;
    n2 = (Inputnum - (n1 * 100))/10;
    n3 = Inputnum - (n2 * 10) - (n1 * 100);
    sumnum = n1 + n2 + +n3;
    printf("%d + %d + %d = %d\n", n1, n2, n3, sumnum);*/

    int inputnum, n1, n2, n3, sum;
    int mem;

    printf("Enter a Three Digit Number: ");
    scanf("%d", &inputnum);

    mem = inputnum % 100;
    n1 = inputnum / 100;
    n2 = mem / 10;
    n3 = mem % 10;

    sum = n1 + n2 + n3;
    printf("%d + %d + %d = %d\n", n1, n2, n3, sum);
}