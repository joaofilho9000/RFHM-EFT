/*
 * Funcao.cpp
 *
 *  Created on: 26 de ago de 2015
 *      Author: joao
 */

#include "Funcao.h"

Funcao::Funcao() {
	// TODO Auto-generated constructor stub
}

Funcao::~Funcao() {
	// TODO Auto-generated destructor stub
	};

double Funcao::Fa(double a_){
	return (1- c1(t,H,p,a_));
};
double Funcao::FH(double H_){
	return 1- c1(t,H_,p,a);
};
double Funcao::Ft(double t_){
	return 1- c1(t_,H,p,a);
};
double Funcao::Fp(double p_){
	return 1- c1(t,H,p_,a);
};


double Funcao::F3a(double a_){
	return (c3(t,H,p,a_));
};
double Funcao::F3H(double H_){
	return  (c3(t,H_,p,a));
};
double Funcao::F3t(double t_){
	return (c3(t_,H,p,a));
};
double Funcao::F3p(double p_){
	return (c3(t,H,p_,a));
};

