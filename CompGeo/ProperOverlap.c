#include <stdio.h>

#define X 0
#define Y 1

typedef enum {FALSE, TRUE} bool;

#define DIM 2
typedef int tPointi[DIM];


bool sbetween(tPointi a, tPointi b, tPointi c);
bool propOverlaps(tPointi a, tPointi b, tPointi c, tPointi d);
bool Collinear( tPointi a, tPointi b, tPointi c );
int  AreaSign( tPointi a, tPointi b, tPointi c );


int main() {
	tPointi p1, p2, p3, p4;
	
	/* The first set is on the X axis and DOES properly overlap */
	p1[X] = p1[Y] = 0;
	p2[Y] = 0;
	p2[X] = 5;
	p3[X] = 4;
	p3[Y] = 0;
	p4[Y] = 0;
	p4[X] = 9;

	bool result = propOverlaps(p1,p2,p3,p4);
	if(result == TRUE)
		printf("The segments properly overlap\n");
	else {
		printf("The segments DO NOT properly overlap\n");
	}

	/* The second is altered only in that they interesect but not overlap */
	p1[X] = p1[Y] = 0;
	p2[Y] = 0;
	p2[X] = 5;
	p3[X] = 4;
	p3[Y] = 0;
	p4[Y] = 1;
	p4[X] = 9;

	result = propOverlaps(p1,p2,p3,p4);
	if(result == TRUE)
		printf("The segments properly overlap\n");
	else {
		printf("The segments DO NOT properly overlap\n");
	}

	/* The third set is on an angle and p3p4 is totally contained by p1p2 */
	p1[X] = 1;
	p1[Y] = 1;
	p2[Y] = 4;
	p2[X] = 4;
	p3[X] = 3;
	p3[Y] = 3;
	p4[Y] = 4;
	p4[X] = 4;

	result = propOverlaps(p1,p2,p3,p4);
	if(result == TRUE)
		printf("The segments properly overlap\n");
	else {
		printf("The segments DO NOT properly overlap\n");
	}

	/* The fourth set DOES NOT prop overlap because p3p4 lies only on p2 */
	p1[X] = 1;
	p1[Y] = 1;
	p2[Y] = 4;
	p2[X] = 4;
	p3[X] = 4;
	p3[Y] = 4;
	p4[Y] = 9;
	p4[X] = 9;

	result = propOverlaps(p1,p2,p3,p4);
	if(result == TRUE)
		printf("The segments properly overlap\n");
	else {
		printf("The segments DO NOT properly overlap\n");
	}
	
	return 0;
}
/*  This modifies Between(...) by replacing each <= with < and each >= with > .
	This ensures that c is strictly between ab and not located at one of its 
	endpoints. */
bool sbetween(tPointi a, tPointi b, tPointi c) {

	tPointi ba, ca;
	/* c must be collinear with ab if it is between */
	if( ! Collinear( a, b, c) ) 
		return FALSE; 

	/* if ab is not vertical check x values else we must check y values*/
	if( a[X] != b[X]) {
		return ((a[X] < c[X]) && (c[X] < b[X])) || 
				((a[X] > c[X]) && (c[X] > b[X]));
	}
	else {
		return ((a[Y] < c[Y]) && (c[Y] < b[Y])) ||
				((a[Y] > c[Y]) && (c[Y] > b[Y]));
	}
}



/* This will determine whether or not cd properly overlaps ab */
bool propOverlaps(tPointi a, tPointi b, tPointi c, tPointi d) {

	/* Ensure that all points are collinear, which is necessary for overlap */
	if  (
		!Collinear(a,b,c) || 
		!Collinear(a,b,d) ||
		!Collinear(c,d,a) || 
		!Collinear(c,d,b)
		) 
		return FALSE;	

	/*  Check to see if an endpoint of one line segment is contained strictly
		between the endpoints of the other line segment, creating an overlap */
	if  (
		sbetween(a,b,c) ||
		sbetween(a,b,d)	||
		sbetween(c,d,a) ||
		sbetween(c,d,b)
		)
		return TRUE;
	else
		return FALSE;
}

bool	Collinear( tPointi a, tPointi b, tPointi c )
{
   return  AreaSign( a, b, c ) == 0;
}

int     AreaSign( tPointi a, tPointi b, tPointi c )
{
    double area2;

    area2 = ( b[0] - a[0] ) * (double)( c[1] - a[1] ) -
            ( c[0] - a[0] ) * (double)( b[1] - a[1] );

    /* The area should be an integer. */
    if      ( area2 >  0.5 ) return  1;
    else if ( area2 < -0.5 ) return -1;
    else                     return  0;
}



