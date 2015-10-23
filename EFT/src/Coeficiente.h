/*
 * Coeficiente.h
 *
 *  Created on: 26 de ago de 2015
 *      Author: joao
 */
#include <math.h>
#ifndef COEFICIENTE_H_
#define COEFICIENTE_H_

class Coeficiente {
//------------------------------------ atributos
//private:
//public:
protected:
	double a;
	double H;
	double p;
	double t;
//--------------------------------------métodos
public:
//--------------------------------------construtores
	Coeficiente(double a_, double H_, double p_, double t_);
	Coeficiente();
	virtual ~Coeficiente();
//--------------------------------------gets e sets
	void set(double a_, double H_, double p_, double t_);
	double getA() const;
	void setA(double a);
	double getH() const;
	void setH(double h);
	double getP() const;
	void setP(double p);
	double getT() const;
	void setT(double t);

//--------------------------------------coeficientes
	double c1(double t_, double H_, double p_, double a_);
	double c3(double t_, double H_, double p_, double a_);
	double c5(double t_, double H_, double p_, double a_);
	double c7(double t_, double H_, double p_, double a_);
	double c9(double t_, double H_, double p_, double a_);

private:
	double g(double u, double v);
	inline double phi(double w);
};
#endif /* COEFICIENTE_H_ */
