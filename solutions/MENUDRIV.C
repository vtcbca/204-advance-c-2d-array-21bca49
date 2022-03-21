/*wap a menu driven program following task using different category */
#include<stdio.h>
#include<conio.h>
void prime();//function without argument without returntype
void palindrome(int x);// function with argument without returntype
int reverse();//function without argument with returntype
int even();// function without argument with return type

voidmain()
{
	int a,b,c;
	char yn;
	clrscr();
	do
	{
	c=menu();
		switch(c)
		{
			case 1:
				prime();
				break;
			case 2:
				printf("enter the number");
				scanf("%d",&a);
				palindrome()
				break;
			case 3: rev=reverse();
				 int a,rev=0;
				 clrscr();
				printf("\n\t enter a reverse number:");
				printf("%d",rev);
				break;

			case 4:
				printf("even number");
				scanf("%d",&a);
				break;
			case:exit(0);

			default:
				printf("invalid choice");
		}
		printf("\n\n\t Do you want to continue ?(yes=Y/y,No=N/n");
		flushall();
		scanf("%c"&yn);
	}
		while(yn=='y'||yn=='Y');
		getch();
}
		int menu()
		{
		 int choice;
		 printf("\n________________\n1.primenumber\n2.palindromenumber\n3.reversenumber\n4.print even number series till n \n5.exit\n______________________________\n);
		 printf("enter your choice");
		 scanf("%d",&choice);
		 return choice;

		 void prime()
		 {
		  int no,i=2,c=0;
	  clrscr();
	 printf("\n\t enter the value:");
	scanf("%d",&no);
	while (i<no)
	{
	 if(no%i==0)
	 {
		c=1;
	      }
	 break;
	}
	i=i+1;
	 if(c==1)
	 {
	 printf("%d is not prime number",no);
	 }
	else
	{
	 printf("%d is prime number",no);
	 }

	   void palindrome()
	   int r,sum=0,e;
	   clrscr();
	   e=a;
	    while(a>0)
	 {
	  r=a%10;
	 sum=(sum*10)+r;
	 a=a/10;
	  }
	if (e==sum)
	 printf("%d is palindrome number",sum);
	else
	 printf("%d is not palidrome number",sum);


	 int reverse ()
	 {
	   while(a!=0)
	 {
	  rev=rev*10;
	 rev=rev+a%10;
	 a=a/10;
	 }
	 printf("\n\t%d is Reverse number ",reverse);

	 int even
	 {
	 int a,b,i;
	 clrscr();
	 printf("enter the number");
	 scanf("%d",&a);
	 for(i=0;i<=a;i++)
	 {
		if (a%2==0)
		{
		printf("%d\n",i);
		}
	 }
