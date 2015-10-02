public class PolyDir {

	public static void main(String[] args) {
		PolyDir test = new PolyDir();
	}

	public Point[] testpoly;
	public PolyDir() {
		testpoly = new Point[5];
		for(int i = 0; i < testpoly.length; i++) 
			testpoly[i] = new Point();
		testpoly[0] = new Point(2,0);
		testpoly[1] = new Point(1,1);
		testpoly[2] = new Point(1,2);
		testpoly[3] = new Point(0,2);
		testpoly[4] = new Point(0,0);
		System.out.println(isCW(testpoly));
	}

	boolean isCW(Point[] poly) {
		boolean result = false;
		double area_sum = 0;

		for(int i = 0; i < poly.length - 1; i++) {
			area_sum += ( (poly[i + 1].x - poly[i].x) 
				* (poly[i+1].y + poly[i].y) );
		}

		if(area_sum > 0) result = true;
		return result;
	}

	private class Point {
		private int x, y;

		public Point() {
			this.x =0;
			this.y = 0;
		}
		public Point(int x, int y) {
			this.x = x;
			this.y = y;
		}
	}
}