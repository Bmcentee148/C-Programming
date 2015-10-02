public class PolyDir {
	
	/** Note: The code is not complete or runnable, just the main idea */
	
	String CWorCCW(Point[] poly) {
		if(isCW(Point[] poly)) 
			System.out.println("The order is CW");
		else
			System.out.println("The order is CCW");
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