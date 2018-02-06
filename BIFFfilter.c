#include<stdio.h>
int main()
{
	char message[100],letters[]="ABEIOS",filter[]="483105";
	int i=0,j;
	printf("Write your message: ");
	gets(message);
	
	while(message[i]!='\0')
	{
		if(message[i]>=97&&message[i]<=122)message[i]-=32;
		for(j=0;j<6;j++)
		{
			if(message[i]==letters[j])
			message[i]=filter[j];
		}
		i++;
	}
	
	for(j=1;j<=10;j++,i++)
	 message[i]='!';
	
	message[i]='\0';
	printf("\nIn B1FF-speak: %s",message);
	
	return 0;
}
