#include<stdio.h>
#include<conio.h>

int partition(int a[],int low,int high)
{
int pivot,p,q,i,t;
pivot = a[low];
p=low+1;
q=high;
while(p<=q)
{
while(a[p]<pivot)
  p++;
while(a[q]>pivot)
  q--;
if(p<q)
{
t=a[p];
a[p]=a[q];
a[q]=t;
}
}
t=a[low];
a[low]=a[q];
a[q]=t;
return q;
}

void qsort(int a[],int low,int high)
{
int pos;
if(low<high)
{
pos = partition(a,low,high);
qsort(a,low,pos-1);
qsort(a,pos+1,high);
}
}

void main()
{
int a[5],i;
clrscr();
printf("\nEnter 5 elements in the array\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

printf("\nSORTING BY QUICKSORT\n\n");

qsort(a,0,4);
printf("\nTHE SORTED ARRAY IS\n");
for(i=0;i<5;i++)
printf("%d ",a[i]);
getch();
}









