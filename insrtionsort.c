/*#include <stdio.h>
int main()
{
int a[50], i, j, k, n, temp, min, loc;
printf("\nEnter size of array : " );
scanf("%d", &n );
printf("\nEnter %d elements of array\n", n);
for ( i = 0; i < n; i++ )
 scanf( "%d", &a[i] );
 
 for ( k = 1; k < n; k++ )
 {
 temp = a[k];
 j = k - 1;
 while ( ( temp > a[j] ) && ( j >= 0 ) ) {
 a[j+1] = a[j];
 j--;
 }
 a[j+1] = temp;
 } 
 
 printf( "\n\nFinal sorted list...\n\n" );
 for ( i = 0; i < n; i++ )
 printf( "%d ", a[i] );
 printf( "\n" );
 return 0;
}*/
/*
#include <stdio.h>
int main()
 {
 int a[50];
 int i, n, item, beg, end, mid;

 /* input data 
 printf("\nEnter size of array : ");
 scanf("%d", &n);
 printf("\nEnter %d elements of the array in ascending order\n",n);
 for ( i = 0; i < n; i++ )
 {
 scanf("%d", &a[i] );
 }
 
 printf("\nEnter the element search : ");
 scanf("%d", &item);
 
 beg = 0;
 end = n - 1;
 while ( beg <= end )
 {
 mid = ( beg + end ) / 2;
 if ( item == a[mid] )
 {
 printf("\n%d found at index %d\n", item, mid);
 return 0;
 }
 if ( item < a[mid] )
 end = mid - 1;
 else
 beg = mid + 1;
 }
 printf("\n%d not found in array\n", item);
 return 0;
}*/
#include <stdio.h>
 int main()
 {
 int a[50], i, j, n, k, temp, min, loc;
 printf("\nEnter size of array : " );
 scanf("%d", &n );
 printf("\nEnter %d elements of array\n", n);
 for ( i = 0; i < n; i++ )
 scanf( "%d", &a[i] );
 for ( i = 0; i < n-1; i++ )
 {
 min = a[i];
 loc = i;
 for ( j = i+1; j < n; j++ )
 {
 if ( a[j] < min ) {
 min = a[j];
 loc = j;
 }
 }
 if ( loc != i ) {
 temp = a[i];
 a[i] = a[loc];
 a[loc] = temp;
 }
 printf( "\n\nArray after pass #%d\n", i+1 );
 for ( k = 0; k < n; k++ )
 {
 printf( "%d ", a[k] );
 if ( i == k )
 printf( "| " );
 }
 
 printf( "\nPress any key to continue with the next pass..." );
 getch();
 
 } 
 printf( "\n\nFinal sorted array ...\n\n" );
 for ( i = 0; i < n; i++ )
 printf( "%d ", a[i] );
 printf( "\n" );
 return 0;
}
