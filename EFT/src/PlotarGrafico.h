/*
 * PlotarGrafico.h
 *
 *  Created on: 2 de set de 2015
 *      Author: joao
 */

#ifndef PLOTARGRAFICO_H_
#define PLOTARGRAFICO_H_
#include "Newton.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

namespace std {

class PlotarGrafico {
public:
	PlotarGrafico();
	PlotarGrafico(double alpha_, double campo_, double temperaturaInicial_,
			double temperaturaFinal_, double deltaT_, double pInicial_,
			double pFinal_, double deltaP_, char* nomeArquivo);
	virtual ~PlotarGrafico();

//----------------parametros
private:
	double alpha;
	double campo;
	double temperaturaInicial;
	double temperaturaFinal;
	double deltaT;
	double pInicial;
	double pFinal;
	double deltaP;
	double concentracao;
	double temperatura;
	double campoTricritico;
	double temperaturaTricritica;
	const char* nomeArquivo;
	const char* nomeArquivo2;
//----------------métodos
public:
	void plotar(double alpha_, double campo_, double temperaturaInicial_,
			double temperaturaFinal_, double deltaT_, double pInicial_,
			double pFinal_, double deltaP_, const char* nomeArquivo_,
			const char* nomeArquivo2_);
};
} /* namespace std */

#endif /* PLOTARGRAFICO_H_ */
