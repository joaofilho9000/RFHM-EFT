/*
 * Coeficiente.cpp
 *
 *  Created on: 26 de ago de 2015
 *      Author: joao
 */

#include "Coeficiente.h"
//--------------------------------------construtores
	Coeficiente::Coeficiente(double a_,double H_, double p_, double t_): a(a_),H(H_), p(p_),t(t_){};
	Coeficiente::Coeficiente(): a(0),H(0),p(0),t(5.0){};
	Coeficiente::~Coeficiente() {};
//--------------------------------------gets sets
	double Coeficiente::getA() const {
		return a;
	};

	void Coeficiente::setA(double a) {
		this->a = a;
	};

	double Coeficiente::getH() const {
		return H;
	};

	void Coeficiente::setH(double h) {
		H = h;
	};

	double Coeficiente::getP() const {
		return p;
	};

	void Coeficiente::setP(double p) {
		this->p = p;
	};

	double Coeficiente::getT() const {
		return t;
	};

	void Coeficiente::setT(double t) {
		this->t = t;
	};

	void Coeficiente::set(double a_,double H_, double p_ , double t_) {
	    a=a_;
		H=H_;
		p=p_;
		t=t_;
     };
//---------------------------------------------------------------coeficientes
	double Coeficiente::c1(double t_, double H_,double p_,double a_ ){
	  double t0;
	  double   MapleGenVar1, MapleGenVar2, MapleGenVar3, MapleGenVar4, MapleGenVar5,
	  MapleGenVar6, MapleGenVar7, MapleGenVar8;
        a=a_;
    	H=H_;
		p=p_;
		t=t_;
	  #include "c1.h"
	  return t0;
	};

	double Coeficiente::c3(double t_, double H_,double p_,double a_ ){
	  double t0;
	  double   MapleGenVar1, MapleGenVar2, MapleGenVar3, MapleGenVar4, MapleGenVar5,
	  MapleGenVar6, MapleGenVar7, MapleGenVar8;
        a=a_;
    	H=H_;
		p=p_;
		t=t_;
	  #include "c3.h"
	  return t0;
	};

	double Coeficiente::c5(double t_, double H_,double p_,double a_ ){
	  double t0;
	  double   MapleGenVar1, MapleGenVar2, MapleGenVar3, MapleGenVar4, MapleGenVar5,
	  MapleGenVar6, MapleGenVar7, MapleGenVar8;
        a=a_;
    	H=H_;
		p=p_;
		t=t_;
	  #include "c5.h"
	  return t0;
	};

	double Coeficiente::c7(double t_, double H_,double p_,double a_ ){
	  double t0;
	  double   MapleGenVar1, MapleGenVar2, MapleGenVar3, MapleGenVar4, MapleGenVar5,
	  MapleGenVar6, MapleGenVar7, MapleGenVar8;
        a=a_;
    	H=H_;
		p=p_;
		t=t_;
	  #include "c7.h"
	  return t0;
	};

	double Coeficiente::c9(double t_, double H_,double p_,double a_ ){
	  double t0;
	  double   MapleGenVar1, MapleGenVar2, MapleGenVar3, MapleGenVar4, MapleGenVar5,
	  MapleGenVar6, MapleGenVar7, MapleGenVar8;
        a=a_;
    	H=H_;
		p=p_;
		t=t_;
	  #include "c9.h"
	  return t0;
	};
//-------------------------------------------------------------------função G
	double Coeficiente::g(double u, double v){
	  double t0;
	  double  MapleGenVar1, MapleGenVar2, MapleGenVar3, MapleGenVar4, MapleGenVar5,
	  MapleGenVar6, MapleGenVar7;
	  #include "g.h"
	  return t0;
	};
//-------------------------------------------------------------------modelos
//	inline double Coeficiente::phi(double w){
//		return(exp(-2.0*w));	//ising
//	};
inline double Coeficiente::phi(double w){
	return((3.0*w*(-1.0+tanh(3.0*w))+tanh(3.0*w))/(3.0*w*(1.0+tanh(3.0*w))-tanh(3.0*w))); //Heisenberg
};
//
//inline double Coeficiente::phi(double w){
//		  return((1.0+sqrt(4.0*w*w+1.0)-2.0*w)/(1.0+sqrt(4.0*w*w+1.0)+2.0*w));// esférico
//};
//inline double Coeficiente::phi(double w){
//		  return((-j1(2.0*w)+j0(2.0*w))/(j1(2.0*w)+j0(2.0*w)));  //XY model
//};


