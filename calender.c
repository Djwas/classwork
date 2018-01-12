#include<stdio.h>
int main()
{
	int days,date,i,j;
	printf("Enter no of days you want in the month: ");
	scanf("%d",&days);
	printf("your month starts with which day(1=sunday,7=saturday)?: ");
	scanf("%d",&date);
	printf("\nSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
	if(date==2)printf("\t");if(date==3)printf("\t\t");
	if(date==4)printf("\t\t\t");if(date==5)printf("\t\t\t\t");
	if(date==6)printf("\t\t\t\t\t");
	if(date==7)printf("\t\t\t\t\t\t");
	for(i=1,j=date;i<=days&&j<=42;i++,j++)
	{
	printf("%d\t",i);
	if(j%7==0)printf("\n");
    }
	return 0;
}

