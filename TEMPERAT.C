#include<stdio.h>
#include<conio.h>
void main()
{

    int a=1,fact=1,n;
    clrscr();
    printf("enter number=");
    scanf("%d",&n);
    do{
	       fact=n*fact;
	       n--;
      }while(n>=1);
      printf("factorial=%d",fact);

      getch();
}
