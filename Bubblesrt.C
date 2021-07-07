#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,j,temp,n;
	clrscr();
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray before sorting\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=n-i;j++)
	  {
	     if(a[j]>a[j+1])
	     {
		  temp=a[j];
		  a[j]=a[j+1];
		  a[j+1]=temp;
	     }
	  }
	}
	printf("\nArray after sorting\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}