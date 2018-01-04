#include<stdio.h>
int main()
{
 int a,i,m=10,n=1;
 printf("Enter a number: ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
        if(i==m){m=m*10;n=n+1;}
 if(n==1){printf("The number %d has 1 digit",a);}
 else{printf("The number %d has %d digits",a,n);}

	return 0;
}
