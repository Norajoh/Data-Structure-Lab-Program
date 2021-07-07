#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,j,temp,n,smallest;
	clrscr();
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
	   smallest=i;
	   for(j=i+1;j<n;j++)
	   {
	      if(a[smallest]>a[j])
	      smallest=j;
	   }
	   if(smallest!=i)
	   {
	       temp=a[i];
	       a[i]=a[smallest];
	       a[smallest]=temp;
	   }
	}
	printf("\nsorted array\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
	getch();
}