#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,r1,r2;
	float d,D;
	printf("Enter a , b and c :");
	scanf("%d%d%d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D<0)
	printf("\nGiven equation has imaginary roots...\n");
	else
	{
		d=-b+sqrt(D);
		r1=b/2.0*a;
		r2=-b/2.0*a;
		if(d>0)
		{
			printf("\nRoots of %dx² + %dx + %d is %d and %d\n",a,b,c,r1,r2);
			printf("\nRoots are real and distinct values.....\n");
		}
		else
		{
			printf("\nRoots of %dx² + %dx + %d is %d and %d\n",a,b,c,r1,r2);
			printf("\nRoots are real values....\n");
		}
	}
	return 0;
}
