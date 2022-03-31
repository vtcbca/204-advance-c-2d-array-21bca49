/*Wa menu driven program to perform following
task using different type of Function category
1-Prime number
2-Palindrome number
3-Reverce Number
4-Print Even number series
5-
6-Exit*/

#include<stdio.h>
#include<conio.h>
void prime(int);//function with argument without returntype
void palindrome(int);//function with argument without returntype
void reverse(int);// function with argument without returntype
void even(int); //function with argument without returntype
int input(int);//function with arguemnt with returntype
int menu();//function without argument with returntype
void main()
{
    int n,c,e,a;
    char ch;
    do
  {
    clrscr();
    printf("\t\tMenu.");
    e=menu();//function calling.
    switch(e)
    {
     case 1:
	  c=input(a);
	  prime(c);
     break;
     case 2:
	  c=input(a);
	  palindrome(c);
     break;
     case 3:
	  c=input(a);
	  reverse(c);
     break;
     case 4:
	  c=input(a);
	  even(c);
     break;
     case 5:
	  exit(0);
     break;
     default:
	  printf("\nInvalid Choice....");
   }
	 printf("\n\n\tDo You Want to continue(Yes=Y/y||no=N/n):");
	 flushall();
	 scanf("%c",&ch);
   }while(ch=='y'||ch=='Y');
    getch();
}
int menu()
{  
	int no;
    printf("\n1.Prime.\n2.palindrome.\n3.reverse.\n4.even number.\n5.Exit");
    printf("\n_____________________________________________");
    printf("\nEnter your choice:");
    scanf("%d",&no);
    return no;
};
int input(int n)
{
  printf("Enter number:");
  scanf("%d",&n);
  return n;
};
void prime(int n)
{
   int a=0,i,b;
    b=n/2;
    for(i=2;i<=b;i++)
    {
	if(n%2==0)
	{
	   printf("\nThe %d is not prime.",n);
	   a=1;
	   break;
	}
    }
    if(a==0)
	 printf("\nThe %d is prime.",n);
};
void palindrome(int x)
{
   int a,c=0,b,i;
   b=x;
   for(;x!=0;)
   {
	a=x%10;
	c=c*10+a;
	x=x/10;
   }
   if(b==c)
       printf("\nThe %d is palindrome.",b);
   else
       printf("\nThe %d is not palindrome.",b);
};
void reverse(int x)
{
  int r;
  for(;x!=0;)
  {
     r=x%10;
     printf("%d\n",r);
     x=x/10;
  }

};
void even(int x)
{
  if(x%2==0)
       printf("\nThe %d is Even.",x);
  else
       printf("\nThe %d is not Even.",x);
};
