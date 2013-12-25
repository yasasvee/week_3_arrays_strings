#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void read(char *input)
{
	printf("Enter your string\n");
	scanf("%s",input);
}
int compare(char *string1,char *string2)
{
	int str1=0,str2=0,match=0,count;
	while(*(string2+str2))
	{
		count=0;
		str1=0;
		while(*(string1+str1))
		{
			if(*(string2+str2)==*(string1+str1) && count==0)
			{
				match+=1;
				count+=1;
				break;
			}
			str1++;
		}
		str2++;
	}
	if(match==str2)
		return 1;
	else
		return 0;
}
int main(void)
{
	char *string1,*string2;
	int len1,len2;
	printf("Enter the size of string 1\n");
	scanf("%d",&len1);
	printf("Enter the size of string 2\n");
	scanf("%d",&len2);
	string1=(char*)malloc(len1*sizeof(char));
	string2=(char*)malloc(len2*sizeof(char));
	read(string1);
	read(string2);
	printf("THE RESULT IS:\n 1 :- IF MATCHED,\n 0:- IF UNMATCHED\n YOUR RESULT :- %d",compare(string1,string2));
	getch();
	return 0;
}
