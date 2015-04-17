#include<stdio.h>
#include<conio.h>
void apsp(int);
int c[15][15],a[15][15];
void main()
{
int n,i,j;
clrscr();
printf("Enter no. of nodes: ");
scanf("%d",&n);
printf("Enter cost values:-\n");
for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
		{
		if(i==j)
		    c[i][j]=0;
		else
		    {
		    printf("Cost[%d,%d]=",i,j);
		    scanf("%d",&c[i][j]);
		    }
		}
	}
apsp(n);
printf("\n  ");
for(i=1;i<=n;i++)
	printf("%d ",i);
printf("\n\n");
for(i=1;i<=n;i++)
	{
	printf("%d ",i);
	for(j=1;j<=n;j++)
		printf("%d ",a[i][j]);
	printf("\n\n");
	}
getch();
}
void apsp(int x)
{
int i,j,k;
for(i=1;i<=x;i++)
	for(j=1;j<=x;j++)
		a[i][j]=c[i][j];
for(k=1;k<=x;k++)
	for(i=1;i<=x;i++)
		for(j=1;j<=x;j++)
			a[i][j]=((a[i][j] > (a[i][k]+a[k][j])) ? (a[i][k]+a[k][j]) : a[i][j]);
}