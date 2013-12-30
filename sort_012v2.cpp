#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void read(int *input,int index)
{
	printf("Enter Your elements \n");
	while(index+1)
	{
		scanf("%d",input);
		input++;
		index--;
	}
}
void sort(int *unsorted,int endpos)
{
	int one=0,zero=0,pos=0;
	while(pos<=endpos)
	{
		if(*(unsorted+pos)==0)
		{
			zero++;
		}
		else if(*(unsorted+pos)==1)
		{
			one++;
		}
		else if(*(unsorted+pos)!=2)
		{
			printf("Invalid input\n");
			exit(0);
		}
		pos++;
	}
	pos=0;
	while(zero)
	{
		*(unsorted+pos)=0;
		pos++;
		zero--;
	}
	while(one)
	{		
		*(unsorted+pos)=1;
		pos++;
		one--;
	}
	while(pos<=endpos)
	{
		*(unsorted+pos)=2;
		pos++;
	}
}
void display(int *output,int index)
{
	printf("Sorted elements are\n");
	while(index+1)
	{
		printf("%d\t",*output);
		output++;
		index--;
	}
}
int main (void)
{
	int *unsorted,size;
	printf("Enter the number of elements\n");
	scanf("%d",&size);
	size-=1;
	unsorted=(int*)malloc(size*sizeof(int));
	read(unsorted,size);
	sort(unsorted,size);
	display(unsorted,size);
	getch();
	return 0;
}
