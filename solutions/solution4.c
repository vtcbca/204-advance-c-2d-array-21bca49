/* Serching  String In mention It's Position
 */
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10],s[10];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n enter a string name:");
		gets(name[i]);
	}
	printf("\n Enter name to search:");
	gets(s);
	for(i=0;i<5;i++)
	{
		if(strcmp(s,name[i]==0))
		{
			printf("Name is available at %d position",s[i]);
			break;
		}
	}
	if(i==5)
		printf("\n Sorry Name is not available here");
	getch();
}
