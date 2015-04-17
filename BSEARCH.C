#include<stdio.h>
#include<conio.h>
void main()
{
int l,u,m,item,s,i,*arr;
clrscr();
printf("Enter the size of the array: ");
scanf("%d",&s);
arr=(int *)malloc(s*sizeof(int));
printf("\nEnter the elments of sorted integer array one by one:-\n");
for(i=0;i<s;i++)
scanf("%d",&arr[i]);
printf("\nEnter the integer to search for: ");
scanf("%d",&item);
l=0;
u=s;
while(l<=u && item!=arr[m])
{
m=(l+u)/2;
if(item<arr[m])
u=m-1;
else if(item>arr[m])
l=m+1;
}
if(l<=u)
printf("\n\nThe integer was found at position %d.",(m+1));
else
printf("\n\nThe integer was not found..!");
getch();
}