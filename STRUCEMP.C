//Wap to create structure employee(eid,ename,dept,basic and perform the following operation
#include<stdio.h>
#include<conio.h>
struct employee
      {
	int eid,dept,basic;
	char ename[20];
      }x;
	void main()
	{
		int c;
		char ch;
		clrscr();
		do
		clrscr();
			printf("\n\t\t\tEmployee\t\t\t");
			printf("\n\t___________________________________________");
			printf("\n\t1.print salary slip \n\t2.search emp based on id \n\t3.search emp based on department\n\t4.sort record based on salary \n\t5.sort record based on empname\n\t 6.exit");
			printf("\n\t___________________________________________");
			printf("\n\tenter your choice");
			scanf("%d",&c);
			clrscr();
		switch(c)
			case 1:
			       printf("\n\t________Salary slip_____");
			       printf("\n Enter the employee id:");
			       scanf("%d",&x.eid);
			       printf("\n Enter the employee name:");
			       scanf("%s",&x.ename);
			       printf("\n Enter the dept:");
			       scanf("%d",&x.dept);
			       printf("\n Enter the basic:");
			       scanf("%d",&x.basic);
			       break;
			case 6:exit(0);
			      default:
					printf("\n\t invalid choice");
			printf("\n\t do you want to continue(yes=y/Y,no=n/N");
			flushall();
			scanf("%c",&ch);

			while(ch=='y'||'Y');



 getch();
}
