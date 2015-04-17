#include<stdio.h>
#include<conio.h>
int *a,*b;
void merge(int l,int m,int u)
{
int i,j,h,k;
h=l;
i=l;
j=m+1;
while(h<=m && j<=u)
{
if(a[h]<=a[j])
	{
	b[i]=a[h];
	h++;
	}
else
	{
	b[i]=a[j];
	j++;
	}
i++;
}
if(h>m)
{
for(k=j;k<=u;k++)
	{
	b[i]=a[k];
	i++;
	}
}
else
{
for(k=h;k<=m;k++)
	{
	b[i]=a[k];
	i++;
	}
}
for(k=l;k<=u;k++)
a[k]=b[k];
}
void msort(int l,int u)
{
int m;
if(l<u)
{
m=(l+u)/2;
msort(l,m);
msort((m+1),u);
merge(l,m,u);
}
}
void main()
{
int i,m,s;
clrscr();
printf("Enter the no. of elements in the array: ");
scanf("%d",&s);
a=(int *)malloc(s*sizeof(int));
b=(int *)malloc(s*sizeof(int));
printf("\nEnter the elements one by one:-\n");
for(i=0;i<s;i++)
scanf("%d",&a[i]);
msort(0,(s-1));
printf("\n\nThe sorted array is:-\n");
for(i=0;i<s;i++)
printf("%d\n",a[i]);
getch();
}