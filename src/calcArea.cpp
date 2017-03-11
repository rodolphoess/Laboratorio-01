/**
 * @file 	calcArea.cpp
 * @brief 	Funções para solicitação das medidas das figuras geométricas ao usuário, tanto as planas quanto as espaciais.
 * @author 	Rodolpho Erick
 * @since 	09/03/2017
 * @data 	11/03/2017
 */

#include <iostream>
#include "calcArea.h"
#include "area.h"

using namespace std;

/**
 * @brief		Função para solicitar ao usuário as medidas do triângulo.
 * @details		A função dadosArTriangulo solicita ao usuário as informações quanto as medidas da base e da altura do triângulo
 *				para posterior cálculo de sua área na função areaTriangulo. 
 */
void dadosArTriangulo() {
	float ladoTriangulo;
	cout << "Digite a medida do lado do triangulo, em metros: ";
	cin >> ladoTriangulo;

	areaTriangulo(ladoTriangulo);
}

/**
 * @brief		Função para solicitar ao usuário as medidas do retângulo.
 * @details		A função dadosArRetangulo solicita ao usuário as informações quanto as medidas da base e da altura do retângulo
 *				para posterior cálculo de sua área na função areaRetangulo. 
 */
void dadosArRetangulo() {
	float baseRetangulo, alturaRetangulo;
	cout << "Digite a medida da base do retangulo, em metros: ";
	cin >> baseRetangulo;
	cout << "Digite a medida da altura do retangulo, em metros: ";
	cin >> alturaRetangulo;

	areaRetangulo(baseRetangulo, alturaRetangulo);
}

/**
 * @brief		Função para solicitar ao usuário a medida do quadrado.	
 * @details		A função dadosArQuadrado solicita ao usuário as informações quanto a medida do lado do quadrado para posterior
 *				cálculo da área na função areaQuadrado. 
 */
void dadosArQuadrado() {
	float ladoQuadrado;
	cout << "Digite a medida do lado do quadrado, em metros: ";
	cin >> ladoQuadrado;

	areaQuadrado(ladoQuadrado);
}

/**
 * @brief		Função para soliciar ao usuário a medida do circulo.
 * @details		A função dadosArCirculo solicita ao usuário a informação quanto a medida do raio do circulo para posterior
 *				cálculo da área na função areaCirculo. 
 */
void dadosArCirculo() {
	float raioCirculo;
	cout << "Digite a medida do raio do circulo, em metros: ";
	cin >> raioCirculo;

	areaCirculo(raioCirculo);
}

/**
 * @brief		Função para solicitar ao usuário as medidas da pirâmide.
 * @details		A função dadosArPiramide solicita ao usuário as informações quanto as medidas do lado da base da pirâmide, 
 *				que é um quadrado, e da altura da pirâmide, que é a medida de uma das arestas dos triângulo.
 */
void dadosArPiramide() {
	float ladoQuadrado, alturaTriangulo;
	cout << "Digite a medida do lado do quadrado que forma a base, em metros: ";
	cin >> ladoQuadrado;
	cout << "Digite a medida da altura da piramide, em metros: ";
	cin >> alturaTriangulo;

	areaPiramide(ladoQuadrado, alturaTriangulo);
}

/**
 * @brief		Função para solicitar ao usuário a medida do cubo.
 * @details		A função dadosArCubo solicita ao usuário a informação quanto a medida da aresta do cubo, para posterior 
 *				calculo da área pela função areaCubo.
 */
void dadosArCubo() {
	float arestaCubo;
	cout << "Digite a medida da aresta do cubo, em metros: ";
	cin >> arestaCubo;

	areaCubo(arestaCubo);
}

/**
 * @brief		Função para solicitar ao usuário as medidas do paralelepípedo.
 * @details		A função dadosArParalelepipedo solicita ao usuário as informações quanto as medidas das três arestas
 *				de um paralelepípedo para posterior cálculo da área pela função areaParalelepipedo.	
 */
void dadosArParalelepipedo() {
	float *arestas = new float[3];
	for (int i = 0; i < 3; i++) {
		cout << "Digite a medida da aresta " << i + 1 << " do paralelepipedo, em metros: ";
		cin >> arestas[i];
	}

	areaParalelepipedo(arestas[0], arestas[1], arestas[2]);

	delete [] arestas;
}

/**
 * @brief		Função para solicitar ao usuário a medida da esfera.
 * @details		A função dadosArEsfera solicita ao usuário a informação quanto a medida do raio da esfera para posterior
 *				calculo da área pela função areaEsfera.
 */
void dadosArEsfera() {
	float raioEsfera;
	cout << "Digite a medida do raio da esfera, em metros: ";
	cin >> raioEsfera;

	areaEsfera(raioEsfera);	
}