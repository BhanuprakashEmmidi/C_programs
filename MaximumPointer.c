#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[101],i,j,min,max;
	printf("ENTER NUMBER OF VALUES :");
	scanf("%d",&n);
	printf("\nENTER DATA :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	printf("MAXIMUM NUMBER IS %d",max);
	return 0;
}

int f1(int *max,int i,int n,int a,int max)
{
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return &a[i];
}
