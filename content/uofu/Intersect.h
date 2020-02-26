/**
 * Author: Oliver Flatt
 * Date: 2020-02-13
 * License: CC0
 * Source: Self
 * Description: Basic line intersection
 */

// lines specified by two points each, 
// returns a double that is the magnitude to multiply p2-p1 by
// intersection = (p2-p1)*interceptLines(p1, p2, p3, p4)
// a + bt = cj (a is the constant in the formula)
// ap + bp(t) = cp(j) solved
pair<bool, double> interceptLines(complex<double> p1,
		complex<double> p2, complex<double> p3, complex<double> p4) {
	double a = p1.real() - p3.real();
	double b = p2.real() - p1.real(); 
	double c = p4.real()- p3.real(); 
	double ap = p1.imag() - p3.imag();
	double bp = p2.imag()-p1.imag();
	double cp = p4.imag() - p3.imag(); 

	if (c == 0.0) {     // should we add an epsilon here?
		if (b == 0.0) {
			return make_pair(false, 0.0);
		}
		else {
			return make_pair(true, -a / b);
		}
	}

	if(c*bp - b*cp == 0.0) {
		return make_pair(false, 0.0);
	}
	double firstRes = c / (c*bp - b*cp);
	double secondRes = (cp*a)/c - ap;
	return make_pair(true, firstRes * secondRes);
}

