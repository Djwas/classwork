#include <stdio.h>

void main()
{

int a,b, c;
a=1; b=1;
c=10*a+b;
while(c!=b*7)
{

   b=b+1;
   c=10*a+b;
   if (b==9){a=a+1;b=1;}
}

printf("the required no is %d",c);
}
