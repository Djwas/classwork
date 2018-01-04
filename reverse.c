#include<stdio.h>
int main()
{
	/*for two digit number*/
	int a,firstdigit,seconddigit,thirddigit;
	if(a%10==0){printf("The number %d in reverse order is 0%d \n",a,(10*seconddigit)+(firstdigit)  );}
 printf("Enter a two digit number ");
 scanf("%d",&a);
firstdigit=a/10; seconddigit=a%10;
if(a%10==0)printf("The number %d in reverse order is 0%d \n",a,(10*seconddigit)+(firstdigit));
else printf("The number %d in reverse order is %d \n",a,(10*seconddigit)+(firstdigit));

 /*for three digit number*/
 printf("Enter a three digit number ");
 scanf("%d",&a);
firstdigit=a/100; seconddigit=(a/10)%10; thirddigit=(a-(a/10)*10);
if(a%10==0)printf("The number %d in reverse order is 0%d ",a,(100*thirddigit)+(10*seconddigit)+(firstdigit));
else printf("The number %d in reverse order is %d",a,(100*thirddigit)+(10*seconddigit)+firstdigit  );

    return 0;
}
