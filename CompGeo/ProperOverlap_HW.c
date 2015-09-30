#define X 0
#define Y 1

typedef enum {FALSE, TRUE} bool;

#define DIM 2
typedef int tPointi[DIM];


bool sbetween(tPointi a, tPointi b, tPointi c);
bool propOverlaps(tPointi a, tPointi b, tPointi c, tPointi d);

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

int main() {
	return 0;
}