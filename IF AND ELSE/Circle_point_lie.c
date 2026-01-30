/* Determine position of point with respect to a circle */ 
/* The center of the circle has been assumed to be at (0, 0) */ 
# include <stdio.h> 
#include<math.h>
int main( ) 
{ 
int  x, y, r ; 
int  dis, d ; 
printf ( "Enter radius of circle& coordinates of point ( x, y ): " ) ; 
scanf ( "%d %d %d", &r, &x, &y ) ; 
dis = sqrt(x * x + y * y);  /* or use pow( ) function*/ 
d = r ; 
if ( dis == d ) 
printf ( "Point is on the circle\n" ) ; 
else 
{                           
  if ( dis > d ) 
   printf ( "Point is outside the circle\n" ) ; 
  else 
   printf ( "Point is inside the circle\n" ) ; 
 } 
 return 0 ; 
}