#include<stdio.h>
#include<conio.h>
void main()
{
int i,u,l=0,m,size,item,*arr;
clrscr();
printf("Enter size of array: ");
scanf("%d",&size);
arr=(int *)malloc(size*sizeof(int));
u=size-1;
printf("Enter a sorted array of %d integers:-\n",size);
for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
printf("Enter the integer to search: ");
scanf("%d",&item);
do
	{
	m=(u+l)/2;
	if(item>arr[m])
		l=m+1;
	else
		u=m-1;
	}while(item != arr[m]);
printf("\nThe element is found at position %d.",(m+1));
getch();
}