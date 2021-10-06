
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
char name[100];
int age, no;
printf("enter your name, age, phone number");
scanf("%s %d %d" ,&name , &age , &no);
printf("%s %d %d", name , age , no);
getch();
return 0;
}

