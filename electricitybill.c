#include<stdio.h>
int main()
{
float units,amount,tax;
printf("Enter the units used: ");
scanf("%g",&units);
if (units<=20)amount=units*4;
else if(20<units&&units<=100){amount=80+(units-20)*7.5;}
else if(100<units&&units<=200){amount=80+(7.5*80)+(100*8.5);}
else{amount=80+(80*7.5)+(100*8.5)+(units-200)*9.5;}
tax=(15/100.0)*amount;
printf("The total sum of money to be paid for %g units is Rs %g ",units,amount+tax);

return 0;
}
