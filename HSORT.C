#include<stdio.h>
#include<conio.h>
void heapsort(int a[],int n);
void heapcreate(int a[],int n);
void adjust(int a[],int n);

int main()
{
int a[20],n,temp,i;
printf("enter number of elements :");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i <n;i++)
scanf("%d",&a[i]);
heapsort(a,n);
printf("sorted array is \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
return(0);
}

void heapsort(int a[],int n)
{
int i,temp;
heapcreate(a,n);
for(i=n-1;i>0;i--)
{
temp=a[0];
a[0]=a[i];
a[i]=temp;
adjust(a,i);
}
//return;
}

void heapcreate(int a[],int n)
{
int i,j,k,item;
for(k=1;k
{
item=a[k];
i=k;
j=(i-1)/2;
while(i>0&&item>a[j])
{
a[i]=a[j];
i=j;
j=(i-1)/2;
}
a[i]=item;
}
//return;
}

void adjust(int a[],int n)
{
int i,j,item;
j=0;
item=a[j];
i=2*j+1;
while(i<=n-1)
{
if(i+1<=n-1)
if(a[i]
i++ ;
if(item)
{
a[j]=a[i];
j=i;
i=2*j+1;
}
else
break;
}
a[j]=item;
//return;
}