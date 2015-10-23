//============================================================================
// Name        : EFT.cpp
// Author      : João Batista
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <thread>
#include "PlotarGrafico.h"
using namespace std;
int main() {
	cout << "!!!mandando bala !!!" << endl;
	PlotarGrafico EFT;
	const char* arquivo="diagrama.agr";
	const char* arquivo2="diagramaPTC.agr";
  //parâmetros alpha, campo, temperaturaInicial, temperaturaFinal, deltaT, pInicial, pFinal, deltaP, diagrama, ptc
	EFT.plotar(0.9, 1, 3.3 , 0.0, 0.001, 0.0, 0.9, 0.01, arquivo, arquivo2 );
	cout << "!!!fim !!!" << endl;
	return 0;
}
