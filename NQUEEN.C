#include<stdio.h>
#include<conio.h>
int x[10];
int Place(int k,int i)
{
int j;
for(j=1;j<=k-1;j++)
	{
	if(x[j]==i||abs(x[j]-i)==abs(j-k))
		return 0;
	else
		return 1;
	}
}
void NQueen(int k,int n)
{
int i;
for(i=1;i<=n;i++)
	{
	if(Place(k,i))
		x[k]=i;
	else
		NQueen(k+1,n);
	}
}
void main()
{
int i,j;
int n=8;
clrscr();
NQueen(1,n);
for(i=1;i<=n;i++)
	printf("%d ",x[i]);
getch();
}