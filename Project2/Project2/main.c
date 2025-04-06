#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main(void)
{

int start = 4;
for (int i = 1; i <= +10; i++) { // Change 5 to the desired number of terms
	printf("%d ", start);
	start += i * 2; // Increment by 2, 4, 6, ... 
	//and change the (+ or -) infront of "start" to output negative numbers
}

printf("\n");
int age = 20;
float height = 173.5f, weight = 65.4f;

printf("age : %d\n", age);
printf("height : %.1f\n", height);
printf("weight : %.1f\n", weight);

int a = 5, b = 10;
int x = a + b;

printf("a + b - 1 = %d\n", x - 1); // 15 - 1
printf("(a + b) * 2 = %d\n", x * 2); // 15 * 2
printf("(a + b) + 5 = %d\n", x + 5); // 15 + 5
printf("(a - b) * 5 = %d\n", x - 5); // 15 - 5

// x 15
x = x * x;

// x
printf("x : %d\n", x);

//a 5, b 10
a = b = 30;
printf("a : %d, b : %d\n", a , b);

//scanf("%d", &x);
//printf("%d", x);

printf("Input two numbers ex) 1 5\n");
scanf("%d %d", &a, &b);
printf("Result : %d", a + b);

/*
#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int kor, eng, math, sum;
	float avg;

	printf("Input Kor >");
	scanf("%d", &kor);
	printf("Input Eng >");
	scanf("%d", &eng);
	printf("Input Math >");
	scanf("%d", &math);

	sum = kor + eng + math;
	avg = sum / 3.f;

	printf("Kor : %d \nEng : %d \nMath : %d \nSum : %d \nAvg : %.2f\n", kor, eng, math, sum, avg);
	system("pause");

	int a = 10, b = 3;
	printf("a + b : %d\n", a + b);
	printf("a - b : %d\n", a - b);
	printf("a * b : %d\n", a * b);
	printf("a / b : %d\n", a / b);
	printf("a %% b : %d\n", a % b);

	int sec, hr, min;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    hr = sec / 3600;
    min = (sec % 3600) / 60;

    printf("%d seconds = %d hours and %d minutes and %d seconds\n", sec, hr, min, sec);

	    /*int Inputnum, n1, n2, n3, sumnum;
    printf("Enter a three digit number: ");
    scanf("%d", &Inputnum);
    n1 = Inputnum / 100;
    n2 = (Inputnum - (n1 * 100))/10;
    n3 = Inputnum - (n2 * 10) - (n1 * 100);
    sumnum = n1 + n2 + +n3;
    printf("%d + %d + %d = %d\n", n1, n2, n3, sumnum);*/

	/* int inputnum, n1, n2, n3, sum;
	int mem;

	printf("Enter a Three Digit Number: ");
	scanf("%d", &inputnum);

	mem = inputnum % 100;
	n1 = inputnum / 100;
	n2 = mem / 10;
	n3 = mem % 10;

	sum = n1 + n2 + n3;
	printf("%d + %d + %d = %d\n", n1, n2, n3, sum); 
	
	    //printf("%c", 5 > 10 ? 'A' : 'B');

    int x = 10;
    x = x + 5;
    x += 5;
    //x = x % 7;
    x %= 7;
    printf("x : %d\n", x);
	
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
	

/*char num;
printf("Enter a number :\n");
scanf("%c", &num);

if (num == '0')
printf("Its a 0\n");
else if (num >= '1')
printf("It's a 양수\n");
else if (num <= '-1')
printf("It's a 음수\n");
return 0;
*/
}