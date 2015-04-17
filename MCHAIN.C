#include<stdio.h>
#include<conio.h>
void prin(int ,int);
int i,j;
int m[100][100],s[100][100];
void main()
{
int n,p[100],l,q,temp,k;
clrscr();
printf("enter the no of matrices\n");
scanf("%ld",&n);
printf("enter the orders of matrices\n");
for(i=0;i<(n+1);i++)
scanf("%d",&p[i]);
for(i=1;i<=n;i++)
{
m[i][i]=0;
}
for(l=2;l<=n;l++)
{
for(i=1;i<=(n-l+1);i++)
{
j=i+l-1;
m[i][j]=32767;
for(k=i;k<=(j-1);k++)
{
q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
if(q<m[i][j])
{
temp=m[i][j];
m[i][j]=q;
q=temp;

s[i][j]=k;
}
}
}
}
printf("Cost matrix::\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d\t",m[i][j]);
}
printf("\n");
}
printf("\nSequence matrix::\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
printf("%d\t",s[i][j]);
printf("\n");
}

prin(1,n);
printf("cost of matrix multi is =%d",m[1][n]);
getch();
}
void prin(int i,int j)
{
if(i==j)
printf("a%d",i);
else
{
printf("(");
prin(i,s[i][j]);
prin((s[i][j]+1),j);
printf(")");
}
}

