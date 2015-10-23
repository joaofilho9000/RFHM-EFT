/*
 * Bisseccao.cpp
 *
 *  Created on: 13 de set de 2015
 *      Author: joao
 */

#include "Bisseccao.h"

namespace std {

Bisseccao::Bisseccao() :
		e(0.001), a(0), b(5.0), n(100) {
	// TODO Auto-generated constructor stub

}
Bisseccao::Bisseccao(double e_, double a_, double b_, double n_) :
		e(e_), a(a_), b(b_), n(n_) {
	// TODO Auto-generated constructor stub

}
Bisseccao::~Bisseccao() {
	// TODO Auto-generated destructor stub
}
double Bisseccao::solucaoH(double a_, double b_) {
	double m = a_ + b_ / 2;
	double fm = FH(m);
	double fa = FH(a_);
	double fb = FH(b_);
	double n = 0;
	if (fa * fb < 0) {
		while ((std::abs(fm) > e) && (n < 1000)) {
			if (fa * fm < 0) {
				b = m;
			} else {
				a = m;
			}
			m = a + b / 2;
			fm = FH(m);
			fa = FH(a);
			n++;
		}

	} else {

	}
	return m;
}

} /* namespace std */
