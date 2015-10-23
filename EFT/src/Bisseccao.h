/*
 * Bisseccao.h
 *
 *  Created on: 13 de set de 2015
 *      Author: joao
 */

#ifndef BISSECCAO_H_
#define BISSECCAO_H_
#include <cmath>
#include "Funcao.h"

namespace std {
class Bisseccao:public Funcao {
private:
	double e;
	double a;
	double b;
	double n;
public:
	Bisseccao();
	Bisseccao(double e_,double a_,double b_,double n_);
	virtual ~Bisseccao();
	double solucaoH(double a_, double b_);
};

} /* namespace std */

#endif /* BISSECCAO_H_ */
