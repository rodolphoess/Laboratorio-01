/**
 * @file 	perimetro.cpp
 * @brief 	Funções para solicitação das medidas das figuras geométricas ao usuário, tanto as planas quanto as espaciais.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	11/03/2017
 */

#include <iostream>
#include "perimetro.h"
#include "menu.h"

#define PI 3.1415

using namespace std;

/**
 * @brief		Função que calcula o perimetro do triângulo equilátero.
 * @param[in] 	lado Valor dos três lados do triângulo equilátero. 
 */
void perimetroTriangulo(float lado){
	cout.precision(2);
	cout << "O perimetro do triangulo e de " << fixed << lado + lado + lado << "m." << endl;
	menu();	
}

/**
 * @brief		Função que calcula o perimetro do retângulo.
 * @param[in] 	baseRetangulo Valor da aresta do retângulo.
 * @param[in] 	alturaRetangulo Valor da aresta do retângulo.
 */
void perimetroRetangulo(float baseRetangulo, float alturaRetangulo){
	cout.precision(2);
	cout << "O perimetro do retangulo e de " << fixed << 2 * (baseRetangulo + alturaRetangulo) << "m." << endl;
	menu();
}

/**
 * @brief		Função que calcula o perimetro do quadrado.
 * @param[in]	ladoQuadrado Valor do lado do quadrado. 
 */
void perimetroQuadrado(float ladoQuadrado){
	cout.precision(2);
	cout << "O perimetro do quadrado e de " << fixed << (4 * ladoQuadrado) << "m." << endl;
	menu();
}

/**
 * @brief		Função que calcula o perimetro do círculo.
 * @param[in] 	raioCirculo Valor do raio do círculo. 
 */
void perimetroCirculo(float raioCirculo){
	cout.precision(2);
	cout << "O perimetro do circulo e de " << fixed << (2 * PI * raioCirculo) << "m." << endl;
	menu();
}