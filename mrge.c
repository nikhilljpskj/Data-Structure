#include<stdio.h>
void main()
{
int a[10],b[10],c[10],p,n,m,i,j,k,temp;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements first array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("elemets are\n");
for(i=0;i<n;i++)
printf("%d \n",a[i]);
printf("enter the limit");
scanf("%d",&m);
printf("enter the elements second array");
for(j=0;j<m;j++)
scanf("%d",&b[j]);
printf("elemets are\n");
for(j=0;j<m;j++)
printf("%d \n",b[j]);
}

