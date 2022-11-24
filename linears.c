#include<stdio.h>
void main()
{
int a[10],key,i,n;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("elemets are\n");
for(i=0;i<n;i++)
printf("%d \n",a[i]);
printf("enter the key");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("Element %d found  at %d",key,i+1);
break;
}
}
if(i==n)
{
printf("Element not found");
}
}
