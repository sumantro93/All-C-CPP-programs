#include<stdio.h>
#include<conio.h>
int mx,mn;
void MinMax(int *a,int l,int u)
{
int mx1,mn1,mid;
if(l==u)
	{
	mx=a[l];
	mn=a[l];
	}
else if(u==(l+1))
	{
	if(a[l]>a[u])
		{
		mx=a[l];
		mn=a[u];
		}
	else
		{
		mx=a[u];
		mn=a[l];
		}
	}
else
	{
	mid=(u+l)/2;
	MinMax(a,l,mid);
	mx1=mx;
	mn1=mn;
	MinMax(a,(mid+1),u);
	if(mx<mx1)
		mx=mx1;
	if(mn>mn1)
		mn=mn1;
	}
}
void main()
{
int i,s,*arr;
clrscr();
printf("Enter the size of array: ");
scanf("%d",&s);
arr=(int *)malloc(s*sizeof(int));
printf("Enter elements 1 by 1..:-\n");
for(i=0;i<s;i++)
	scanf("%d",&arr[i]);
MinMax(arr,0,(s-1));
printf("\nThe Max val: %d.",mx);
printf("\nThe Min val: %d.",mn);
getch();
}