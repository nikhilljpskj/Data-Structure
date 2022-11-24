#include<stdio.h>
void main()
{
int a[10],n,i,temp;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("elemets are\n");
for(i=0;i<n;i++)
printf("%d \n",a[i]);
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
printf("the sorted array is");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
