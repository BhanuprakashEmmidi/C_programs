#include<stdio.h>
void main()
{
	int n,max,i;
	int a[]= {87,8,5,947,65,74,45,91,1,9,5656,45};
	n=sizeof(a)/sizeof(a[0]);
	/*printf("Enter number of terms : ");
	scanf("%d",&n);
	printf("\nEnter %d values of array : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}*/
	printf("\nLargest number is : %d",f(max));
}
int f(int i,int n,int a[i],int max)
{
	max=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max){
		max = a[i];
		}
	}
	return max;
}
