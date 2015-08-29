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
#include "Newton.h"

using namespace std;

int main() {
	cout << "!!!mandando bala !!!" << endl; // prints !!!Hello World!!!
	FILE *result = NULL;
	FILE *ptc = NULL;
	FILE *configuracao = NULL;
	result = fopen("diagrama.agr", "w"); // Abre o arquivo
	ptc = fopen("ptc.agr", "w"); // Abre o arquivo
	if (result== NULL)
	{
		printf("\nArquivo resultado.txt nao pode ser aberto.");
		printf("\nOcorreu um Erro Grave ! Use alguma tecla para finalizar !");
		system("pause");
		exit(1);
	}

	double ht;
	double tt;
	double c3;
	double alpha=0.0;
	double campo=0.2;
	double concentracao=0.0;
	double temperatura=5.03;
	Newton problema;
	problema.set(alpha,campo,concentracao,temperatura);
	for (concentracao=0.0; concentracao<=0.4;concentracao+=0.1)
	{
		for (temperatura=4.9;temperatura>=0.1; temperatura-=0.001)    //variando a temperatura
		{
			problema.set(alpha,campo,concentracao,temperatura);
			campo=problema.solucao(campo);
			if (std::isfinite(campo))
			{
				c3=problema.F3H(campo);
				if((c3>=0) and (std::isfinite(c3)))
				{
					printf("%f %f\n", campo, temperatura );
					fprintf(result,"%f %f\n ", campo, temperatura );
					ht= campo;
					tt=temperatura;
				}
				else
				{
					printf("fim %f %f\n", ht, tt );
					fprintf(result,"& \n " );
					fprintf(result,"%f %f\n ", ht, tt );
					fprintf(ptc,"%f %f %f\n ",campo, ht, tt );
					break ;
				}
			}
		}
		fprintf(result,"& \n " );
	}
	fclose(result);    // Fecha arquivo
	fclose(ptc);          // Fecha arquivo
	fclose(configuracao); // Fecha arquivo
	// solucao.setF(&modelo.Ft);
	cout << "!!!fim !!!" << endl;
	return 0;
}
