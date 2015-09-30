/*  This modifies Between(...) by replacing each <= with < and each >= with > .
	This ensures that c is strictly between ab and not located at one of its 
	endpoints. */
bool sbetween(tPointi a, tPointi b, tPointi c) {

	tPointi ba, ca;
	/* c must be collinear with ab if it is between */
	if( ! Collinear( a, b, c,) ) 
		return false; 

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

