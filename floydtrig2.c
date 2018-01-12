#include<stdio.h>
int main()
{
	int n,i,j,count,a;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,count=i,a=i;j<=(2*i-1);j++,a++)
		{
		printf("%d ",count);
		if(a>=(2*i-1))count-=1; else count+=1;
        }  printf("\n");
	
	}
	return 0;
}
