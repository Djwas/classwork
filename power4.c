#include<stdio.h>
void main()
{
long int a,b,c,d;
for(a=1;a<=99999;a++)
	{for(b=1;b<=99999;b++)
		{for(c=1;c<=99999;c++)
 			{for(d=1;d<=99999;d++)
				if ((a*a*a*a)+(b*b*b*b)+(c*c*c*c)==(d*d*d*d)){printf("%li,%li,%li,%li \n",a,b,c,d);}}}}
}
