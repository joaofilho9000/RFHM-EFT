/*
 * PlotarGrafico.cpp
 *
 *  Created on: 2 de set de 2015
 *      Author: joao
 */

#include "PlotarGrafico.h"

namespace std {

PlotarGrafico::PlotarGrafico(){};
PlotarGrafico::PlotarGrafico(double alpha_, double campo_, double temperaturaInicial_,
		double temperaturaFinal_,double deltaT_, double pInicial_, double pFinal_, double deltaP_,char* nomeArquivo_):
									alpha(alpha_), campo(campo_), temperaturaInicial(temperaturaInicial_),
									temperaturaFinal(temperaturaFinal_),deltaT(deltaT_),pInicial(pInicial_),pFinal(pFinal_),deltaP(deltaP_){
	this->nomeArquivo=nomeArquivo_;
	ofstream arquivoDiagrama;
	ofstream arquivoPTC;
	arquivoDiagrama.open(nomeArquivo);
	if(arquivoDiagrama.fail())
	{
		cout << " Não abriu o arquivo de disco ."<< nomeArquivo << endl ;
	}
	arquivoPTC.open("teste.dat");
	if(arquivoPTC.fail())
	{
		cout << " Não abriu o arquivo de disco ."<< nomeArquivo << endl ;
	}
	Newton problema;
	double Coeficiente3;
	for(concentracao=pInicial; concentracao<=pFinal;concentracao+=deltaP)
	{
		for(temperatura=temperaturaInicial;temperatura>  temperaturaFinal; temperatura-=deltaT)    //variando a temperatura
		{   problema.set(alpha,campo,concentracao,temperatura);
		campo=problema.solucao(campo);
		if (isfinite(campo))
		{
			Coeficiente3=problema.F3H(campo);
			if((Coeficiente3<=0) and (isfinite(Coeficiente3)))
			{
				arquivoDiagrama	<<"#campo temperatura" << endl;
				arquivoDiagrama << campo << temperatura << endl;
				//		printf("%f %f\n", campo, temperatura );
				//		fprintf(result,"%f %f\n ", campo, temperatura );
				//		fprintf(result2,"%f	%f	%f\n ", campo, concentracao, temperatura );
				campoTricritico= campo;
				temperaturaTricritica=temperatura;
			}
			else
			{
				arquivoPTC << campoTricritico << temperaturaTricritica <<  endl;
				arquivoDiagrama << "&" << endl;
				arquivoDiagrama << campoTricritico << temperaturaTricritica << endl;
				//		printf("fim %f %f\n", ht, tt );
				//			fprintf(result,"& \n " );
				//		fprintf(result,"%f %f\n ", ht, tt );
				//		fprintf(ptc,"%f %f %f\n ",campo, ht, tt );
				break ;
			}
		}
		}
		//	fprintf(result,"& \n " );
		arquivoDiagrama << "&" << endl;
	}
	arquivoDiagrama.close();
	arquivoPTC.close();
}

PlotarGrafico::~PlotarGrafico() {
	// TODO Auto-generated destructor stub
}

void PlotarGrafico::plotar(double alpha_, double campo_, double temperaturaInicial_,
		double temperaturaFinal_,double deltaT_, double pInicial_, double pFinal_, double deltaP_,const char* nomeArquivo_,const char* nomeArquivo2_){

	alpha=alpha_;
	campo=campo_;
	temperaturaInicial= temperaturaInicial_;
	temperaturaFinal= temperaturaFinal_;
	deltaT= deltaT_;
	pInicial= pInicial_;
	pFinal=pFinal_;
	deltaP=deltaP_;
	nomeArquivo= nomeArquivo_;
	nomeArquivo2= nomeArquivo2_;
	ofstream arquivoDiagrama;
	ofstream arquivoPTC;
	arquivoDiagrama.open(nomeArquivo);
	if(arquivoDiagrama.fail())
	{
		cout << " Não abriu o arquivo de disco ."<< nomeArquivo << endl ;
	}
	arquivoPTC.open(nomeArquivo2);
	if(arquivoPTC.fail())
	{
		cout << " Não abriu o arquivo de disco ."<< nomeArquivo << endl ;
	}
	Newton problema;
	double Coeficiente3;
	for(concentracao=pInicial; concentracao<=pFinal;concentracao+=deltaP)
	{
		for(temperatura=temperaturaInicial;temperatura>  temperaturaFinal; temperatura-=deltaT)    //variando a temperatura
		{   problema.set(alpha,campo,concentracao,temperatura);
		campo=problema.solucao(campo);
		if (isfinite(campo))
		{
			Coeficiente3=problema.F3H(campo);
			if((Coeficiente3<=0) and (isfinite(Coeficiente3)))
			{
				arquivoDiagrama	<<"#campo temperatura" << endl;
				arquivoDiagrama << campo << temperatura << endl;
				campoTricritico= campo;
				temperaturaTricritica=temperatura;
			}
			else
			{
				arquivoPTC << campoTricritico << temperaturaTricritica <<  endl;
				arquivoDiagrama << "&" << endl;
				arquivoDiagrama << campoTricritico << temperaturaTricritica << endl;
				break ;
			}
		}
		}
		//	fprintf(result,"& \n " );
		arquivoDiagrama << "&" << endl;
	}
	arquivoDiagrama.close();
	arquivoPTC.close();

}




} /* namespace std */
