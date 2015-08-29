/*
 * Newton.h
 *
 *  Created on: 26 de ago de 2015
 *      Author: joao
 */

#ifndef NEWTON_H_
#define NEWTON_H_
#include <cmath>
#include "Funcao.h"

class Newton:public Funcao{
//--------------------atributos
private:
	double e;
	double dx;
//--------------------métodos
public:
//--------------------construtores
	Newton();
	Newton(double e_,double dx);
	virtual ~Newton();
//--------------------gets sets
	double getE() const;
    void setE(double e);
	double getDx() const;
	void setDx(double dx);

	double dF(double x);
	double solucao(double x);
};

#endif /* NEWTON_H_ */
