#include<stdio.h>
void main()
{
int a;
printf("Enter a number between 11 and 99 ");
scanf("%d",&a);
	int firstdigit=a/10,seconddigit=a%10;
if(a==11)
  {printf("Eleven");}
else if(a==12)
  {printf("Twelve");}
else if(a==13)
  {printf("thirteen");}
else if(a==14)
  {printf("fourteen");}
else if(a==15)
  {printf("fifteen");}
else if(a==16)
  {printf("sixteen");}
else if(a==17)
  {printf("seventeen");}
else if(a==18)
  {printf("eighteen");}
else if(a==19)
  {printf("ninenteen");}

else
{
if(firstdigit==2&&seconddigit==0||firstdigit==2)
	{printf("twenty");}

if(firstdigit==3&&seconddigit==0||firstdigit==3)
	{printf("thirty");}
if(firstdigit==4&&seconddigit==0||firstdigit==4)
	{printf("fourty");}
if(firstdigit==5&&seconddigit==0||firstdigit==5)
	{printf("fifty");}
if(firstdigit==6&&seconddigit==0||firstdigit==6)
	{printf("sixty");}
if(firstdigit==7&&seconddigit==0||firstdigit==7)
	{printf("seventy");}
if(firstdigit==8&&seconddigit==0||firstdigit==8)
	{printf("eighty");}
if(firstdigit==9&&seconddigit==0||firstdigit==9)
	{printf("ninety");}


if(seconddigit==1)
	{printf("-one ");}
if(seconddigit==2)
	{printf("-two ");}
if(seconddigit==3)
	{printf("-three ");}
if(seconddigit==4)
	{printf("-four ");}
if(seconddigit==5)
	{printf("-five ");}
if(seconddigit==6)
	{printf("-six ");}
if(seconddigit==7)
	{printf("-seven ");}
if(seconddigit==8)
	{printf("-eight ");}
if(seconddigit==9)
	{printf("-nine ");}

}

	





}
