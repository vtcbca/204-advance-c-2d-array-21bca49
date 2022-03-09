//write a program to create two 3*3 matrix and print diagonal of it*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],i,j,c=0;
	clrscr();
	 for(i=0;i<3;i++) //For Row
	      {
		 for(j=0;j<3;j++) //For Columns
		      {
			 printf("Enter the first Element m1[%d][%d]:",i,j);
			 scanf("%d",&m1[i][j]);
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
	       for(i=0;i<3;i++) //For Row
		 {
		 for(j=0;j<3;j++) //For Columns
		   {
		    if(i==j&&m1[i][j]==0)
		     {
			c=1;
			break;
		     }
		      else if(i!=j&&m1[i][j]!=0)
			 {
			  c=1;
			  break;
			 }
		   }
		 }
	      if(c==0)
		 printf("\n Diagonal");
	      else
		printf("\n not a Diagonal");
   getch();
 }
