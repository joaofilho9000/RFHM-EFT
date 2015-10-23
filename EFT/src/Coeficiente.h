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
	long double a;
	long double H;
	long double p;
	long double t;
//--------------------------------------métodos
public:
//--------------------------------------construtores
	Coeficiente(long double a_,long double H_,long double p_ ,long double t_);
	Coeficiente();
	virtual ~Coeficiente();
//--------------------------------------gets e sets
	void set(long double a_,long double H_,long double p_ ,long double t_);
	double getA() const;
	void setA(double a);
	double getH() const;
	void setH(double h) ;
	double getP() const ;
	void setP(double p) ;
	double getT() const ;
	void setT(double t) ;

//--------------------------------------coeficientes
	long double c1(long double t_,long double H_,long double p_,long double a_  );
	long double c3(long double t_,long double H_,long double p_,long double a_  );
	long double c5(long double t_,long double H_,long double p_,long double a_  );
	long double c7(long double t_,long double H_,long double p_,long double a_  );
	long double c9(long double t_,long double H_,long double p_,long double a_  );

private:
	long double g(long double u, long double v);
	inline long double phi(long double w);
};
#endif /* COEFICIENTE_H_ */
