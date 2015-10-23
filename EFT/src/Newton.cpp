/*
 * Newton.cpp
 *
 *  Created on: 26 de ago de 2015
 *      Author: joao
 */

#include "Newton.h"
//--------------------------------------construtores
Newton::Newton() :
		e(0.001), dx(0.01) {
}
Newton::Newton(double e_, double dx_) :
		e(e_), dx(dx_) {
}
Newton::~Newton() {
}

//--------------------------------------gets sets

double Newton::getE() const {
	return e;
}

void Newton::setE(double e) {
	this->e = e;
}

double Newton::getDx() const {
	return dx;
}

void Newton::setDx(double dx) {
	this->dx = dx;
}

inline double Newton::dF(double x) {
	return ((FH(x + dx / 2) - FH(x - dx / 2)) / dx);
}

double Newton::solucao(double x) {
	float ff, dff;
	int n;       //contador
	ff = 1;        //auxiliares
	n = 0;
	while ((std::abs(ff) > e) && (n < 1000)) {
		ff = FH(x);
		dff = dF(x);
		x = x - ff / dff;
		n++;
	}
	return x;
}
