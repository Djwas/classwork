#include<stdio.h>
#include<math.h>
int main()
{
int num,a,count=0,i,reverse=0;
printf("Enter any number ");
scanf("%d",&num);
a=num;
while(a>=10)
{

	a=a/10;count+=1;
}
for (i=count;i>=0;i=i-1)
{
	reverse+=((num%10)*pow(10,i));
	num=num/10;
}

printf("Reverse is %d ",reverse );
return 0;
}
