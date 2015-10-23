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
#include "PlotarGrafico.h"
using namespace std;
int main() {
	cout << "!!!mandando bala !!!" << endl;
	PlotarGrafico EFT;
	const char* arquivo="diagrama.agr";
	const char* arquivo2="diagramaPTC.agr";
	EFT.plotar(0.1, 0.2, 5, 0.0, 0.005, 0, 0.9, 0.005, arquivo, arquivo2 );
	cout << "!!!fim !!!" << endl;
	return 0;

}
