#include<stdio.h>
void main()
{
	int n,i,j,duplicate=0,result=0,same=0;
	printf("How many numbers you want to evaluate?\n");
	scanf("%d",&n);
	int array[n];
	printf("\nEnter %i numbers:\n",n);
	
	for(i=0;i<n;i++)
		scanf("%i",&array[i]);
		
	for(i=0;i<n;i++)
	{
		if(i>0)
		{
			for (j=0;j<i;j++)
			{
				if(array[i]==array[j])same++;
			}
		}
		if(same>=1)
		{
			same=0;
			continue;
		}
		else
			{
                for(j=0;j<n;j++)
                {
                 	if(array[i]==array[j])duplicate++;
				}
				if(duplicate>1)result++;
				duplicate=0;
			}
	}
	printf("\nNumber of numbers having duplicate values= %i",result);
	getch();
}
