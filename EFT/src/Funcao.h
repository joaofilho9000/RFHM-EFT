/*
 * Funcao.h
 *
 *  Created on: 26 de ago de 2015
 *      Author: joao
 */
#include "Coeficiente.h"
#ifndef FUNCAO_H_
#define FUNCAO_H_

class Funcao:public Coeficiente{
public:
	Funcao();
	virtual ~Funcao();
	double Fa(double a_);
	double FH(double H_);
	double Ft(double t_);
	double Fp(double a_);

	double F3a(double a_);
	double F3H(double H_);
	double F3t(double t_);
	double F3p(double a_);
};

#endif /* FUNCAO_H_ */
