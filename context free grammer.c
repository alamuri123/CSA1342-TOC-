#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,flag=1;
	printf("Enter a string:");
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!='0' && s[i]!='1')
		  flag=0;
	}
	if(flag==0)
	printf("Invalid input");
	if(flag==1)
	{
		if(s[0]=='0' && s[l-1]=='1')
		printf("Accept");
		else
		printf("Not accept");
	}
}
