#include<stdio.h>
void main()
{
	int a[5],i,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  printf("%d",a[i]);
	}
}
