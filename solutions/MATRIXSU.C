//write a program to create two 3*3 matrix and print sum of it*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],sum[3][3],i,j;
	clrscr();
	 for(i=0;i<3;i++) //For Row
	      {
		 for(j=0;j<3;j++) //For Columns
		   {
			 printf("Enter the first Element m1[%d][%d]:",i,j);
			 scanf("%d",&m1[i][j]);
		   }
	      }
	      // Logic
	      for(i=0;i<3;i++)
		  {
		     for(j=0;j<3;j++)
		     {
			  printf("Enter the second Element m2[%d][%d]:",i,j);
			 scanf("%d",&m2[i][j]);
		     }
		  }
		  clrscr();
		  printf("matrix 1 \n");
	       for(i=0;i<3;i++) //For Row
	      {
		 for(j=0;j<3;j++) //For Columns
		  {
			 printf("%d\t",m1[i][j]);
		   }
		 printf("\n");

	      }
	      // Logic
	      printf("matrix 2\n");
	      for(i=0;i<3;i++)
		  {
		     for(j=0;j<3;j++)

			  printf("%d \t",m2[i][j]);

		     printf("\n");

		  }
		   printf("matrix 3 \n");
		   printf("________________________\n");
	       for(i=0;i<3;i++) //For Row
	      {
		 for(j=0;j<3;j++) //For Columns
		  {      sum[i][j]=m1[i][j]+m2[i][j];
			 printf("%d\t",sum[i][j]);
		   }
		 printf("\n");

	      }
   getch();
 }