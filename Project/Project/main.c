#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%2s %-5s %-5s %-5s %-5s %-5s\n", "ÀÌ¸§", "±¹¾î", "¿µ¾î", "¼öÇÐ", "ÃÑÁ¡", "Æò±Õ");
	printf("%02s %5d %5d %5d %5d %5f\n", "È«±æµ¿", 80, 90, 80, 80 + 90 + 80, (80 + 90 + 80) / 3.f);
	printf("load zero test : %d\n", 3);
	printf("load zero test : %3d\n", 3);
	printf("load zero test : %03d\n", 3);

	printf("12456\rabc\\ \' \"\n");
	printf("\"Hello, World!\"\n");
	printf("we are currently working in the folder named C : \\Users\\TJ\\source\\repos\\Project");
	

	return 0;
	/*printf("int : %d\n", 1);
	printf("char : %d\n", '0');

	printf("print integer : %d\n", 127);
	printf("%d + %d = %d\n", 5, 7, 5+7);
	printf("int %d,\nfloat %f,\nchar %c,\nstring %s\n",  1, 1.0f, '1', "1");
	printf("%f / %f = %.3f", 1.0f, 3.0f, 1.0f / 3.0f);
	return 0;*/

	//A: 65, a: 97 0: 48
	//https://www.ascii-code.com/
	//https://www.asciitable.com/
	
	/*printf("Hello, World!");

	printf("\n");
	printf("Hi, TJ");

	printf("int : %d\n", 1);
	printf("char : %d\n", '1');

	printf("\n");
	printf("%f, %f, %f, %f, %f", 1.0, -0.100, 2., .5, -.100f);

	printf("\n");
	system("pause");
	return 0;*/
	
	//ctrl + F5
	//»ó¼ö: Literal/ constant
	//Variable : º¯¼ö
	//https://www.geeksforgeeks.org/diffference-define-const-c/

	//Memo
	// ctrl + /

	//() ¼Ò°ýÈ£, °ýÈ£
	//{} Áß°ýÈ£, ºí·°
	//[] ´ë°ýÈ£

	//" double quote
	//' single quote
	//` grave, grave accent, backtick
	/*
	Add Stuff here:
	printf("\n"); = line break
	*/

}
