/**
 * @file 	area.cpp
 * @brief 	Funções para cálculo de área das figuras planas e espaciais.
 * @author 	Rodolpho Erick
 * @since 	09/03/2017
 * @data 	11/03/2017
 */

#include <iostream>
#include <cmath>
#include "area.h"
#include "calcPerimetro.h"
#include "calcVolume.h" 

#define PI 3.1415

using namespace std;

/**
 * @brief		Função que calcula a área do triângulo.
 * @param[in] 	lado Valor do lado do triângulo.
 */
void areaTriangulo(float lado) {
	cout.precision(2);
	cout << "\nA area do triangulo e de " << fixed << (lado * lado) / 2 << "m2." << endl;
	
	dadosPerTriangulo(lado);
}

/**
 * @brief		Função que calcula a área do retângulo.
 * @param[in] 	base Valor da base do retângulo.
 * @param[in] 	altura Valor da altura do retângulo. 
 */
void areaRetangulo(float base, float altura) {
	cout.precision(2);
	cout << "\nA area do retangulo e de " << fixed << (base * altura) << "m2." << endl;
	
	dadosPerRetangulo(base, altura);
}

/**
 * @brief		Função que calcula a área do quadrado.
 * @param[in] 	lado Valor do lado do retângulo. 
 */
void areaQuadrado(float lado) {
	cout.precision(2);
	cout << "\nA area do quadrado e de " << fixed << pow(lado, 2) << "m2." << endl;
	
	dadosPerQuadrado(lado);
}

/**
 * @brief		Função que calcula a área do circulo.
 * @param[in] 	raio Valor do raio do circulo.
 */
void areaCirculo(float raio) {
	cout.precision(2);
	cout << "\nA area do circulo e de " << fixed << PI * pow(raio, 2) << "m2." << endl;
	
	dadosPerCirculo(raio);		
}

/**
 * @brief		Função que calcula a área da pirâmide.
 * @param[in] 	lado Valor da aresta da base da pirâmide, que forma um quadrado. 
 * @param[in] 	altura Valor das alturas dos triângulos da pirâmide.
 */
void areaPiramide(float lado, float altura) {
	float areaBase = pow(lado, 2);
	float areaLateral = 4 * ((lado * altura) / 2);

	cout.precision(2);
	cout << "\nA area da piramide e de " << fixed << areaBase + areaLateral << "m2." << endl;
	
	dadosVolPiramide(areaBase, altura);
}

/**
 * @brief		Função que calcula a área do cubo.
 * @param[in] 	aresta Valor da aresta do cubo.  
 */
void areaCubo(float aresta) {
	cout.precision(2);
	cout << "\nA area do cubo e de " << fixed << 6 * pow(aresta, 2) << "m2." << endl;
	
	dadosVolCubo(aresta);	
}

/**
 * @brief		Função que calcula a área do paralelepípedo.
 * @param[in] 	aresta1 Primeiro valor das três arestas do paralelepípedo.  
 * @param[in]	aresta2 Segundo valor das três arestas do paralelepípedo.
 * @param[in]	aresta3 Terceiro valor das três arestas do paralelepípedo. 
 */
void areaParalelepipedo(float &aresta1, float &aresta2, float &aresta3) {
	cout.precision(2);
	cout << "\nA area do paralelepipedo e de " << fixed << ((2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3)) << "m2." << endl;
	
	dadosVolParalelepipedo(aresta1, aresta2, aresta3);
}

/**
 * @brief		Função que calcula a área da esfera.
 * @param[in] 	raio Valor do raio de uma esfera.
 */
void areaEsfera(float raio) {
	cout.precision(2);
	cout << "\nA area da esfera e de " << fixed << 4 * PI * pow(raio, 2) << "m2." << endl;
	
	dadosVolEsfera(raio);	
}